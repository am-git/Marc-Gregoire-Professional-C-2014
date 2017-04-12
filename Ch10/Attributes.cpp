#include "stdafx.h"

#include <iostream>
#include <atomic>

#include "Attributes.h"

int Attributes::mInt = 0;


#pragma  region carries_dependency attribute
/// for [[carries_dependency]]
/// good notes at http://stackoverflow.com/questions/6411270/what-does-the-carries-dependency-attribute-mean
/// also: "10.6.3 Carries dependency attribute" (C++ Draft n4659.pdf)

std::atomic<int*> p;

void print(int * val)
{
	std::cout << *p << std::endl;
}

void print2(int* val [[carries_dependency]])
{
	std::cout << *p << std::endl;
}

void Attributes::Test_carries_dependency() noexcept
{
	auto local = p.load(std::memory_order_consume);
	if (local)
		std::cout << *local << std::endl; // 1

	if (local)
		print(local); // 2

	if (local)
		print2(local); // 3
}

#pragma endregion

#pragma region noreturn attribute

[[noreturn]]
void Attributes::Test_noreturn() noexcept(false)
{
	mInt += 100;
	throw 1;
	//return;
}
#pragma endregion

#pragma region deprecated_attribute
void Attributes::Test_deprecated() noexcept
{
	
}
#pragma endregion



#pragma region fallthrough_attribute
void Attributes::Test_fallthrough(const int n) noexcept
{
	//void g(), h(), i();
	int k, m, l;
	switch (n) {
	case 1:
	case 2:
		//g();
		k = n + 2;
		[[fallthrough]];
	case 3: // warning on fallthrough discouraged
		m = n + 2;
		//h();
	case 4: // implementation may warn on fallthrough
		//i();
		l = n + 4;
		[[fallthrough]]; // ill-formed
	default:
		;
	}
}
#pragma endregion

#pragma region Microsoft-specific attributes
#pragma region gsl::suppress 
#pragma endregion
#pragma endregion


void Attributes::Test() noexcept
{
	Test_carries_dependency();
	Test_deprecated();
	Test_fallthrough(2);
	Test_noreturn();
}


