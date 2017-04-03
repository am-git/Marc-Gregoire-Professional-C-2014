#include "stdafx.h"

#include <iostream>
#include <atomic>

#include "Attributes.h"


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

void Test_carries_dependency()
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

#pragma region 
#pragma endregion 

void Attributes::Test() noexcept
{
	Test_carries_dependency();
}


void Attributes::func_noreturn() noexcept(false)
{
	mInt += 100;
	throw 1;
}