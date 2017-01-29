// Ch01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>

#include "Ch01.h"

using namespace ch01;

/// page 33
const std::string message = "Test";
const std::string& foo()
{
	return message;
}

// change #2
int main() /// main function
{
	/// page 10
	char16_t c16 = u'm';
	char32_t c32 = U'm';

	/// page 11
	auto b = 0b11110101;		// C++14
	int number1 = 23'456'789;	// C++14
	float number2 = 0.123'456f; // C++14

	/// page 14
	/// Strongly typed enumerations
	enum class MyEnum // C++11
	{
		Val1,
		Val2 = 10,
		Val3
	};

	/// page 15
	/// non int enum
	enum class MyEnumLong : unsigned long // C++11
	{
		Val1Long,
		Val2Long = 10,
		Val3Long
	};

	//enum class MyEnumDouble : double /// ERROR, "double" is not integral type
	//{
	//	Val1Long,
	//	Val2Long = 10.,
	//	Val3Long
	//};

	/// page 19
	/// you can also accomplish the zeroinitialization with the following one - liner:
	int myArray[3] = { 0 };

	/// Note that this is only possible if you want to initialize all values to zero.For example, the following
	/// line fills only the first element in the array with the value 2 and fills all the other elements in the
	/// array with the value 0:
	int myArray2[3] = { 2 };

	/// page 20
	TestArray1();

	/// page 24
	/// The decltype keyword takes an expression as argument, and computes the type of that expression.
	/// For example :
	int x = 123;
	decltype(x) y = 456; // C++14
						 /// In this example, the compiler deduces the type of y to be int because that’s the type of x.

						 /// page 28
						 /// Before C++11, the constant 0 was used to define either the number 0 or a null pointer. This can	cause some problems.
						 /// This problem is solved with the introduction of a real null pointer constant, nullptr.
	char* pc = nullptr; // C++11

	/// page 29...
	TestSmartPtr1();

	/// page 33
	/// One more example with decltype
	/// The solution in C++14 is as follows :
	decltype(auto) f3 = foo();
	/// f3 now is also of type const string&.

	/// page 37

	return 0;
}


/// page 23
auto ch01::func11(int n) -> int { return n + 2; } // C++11

/// page 23
auto ch01::func14(int n) { return n + 2; } // C++14

