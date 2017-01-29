#pragma once
#include <string>

class MyClass
{
public:

	/// page 159
	MyClass() = default; // C++11

	MyClass(const int, const std::string&);
	MyClass(const std::string&);
	MyClass(const int);

	MyClass(const MyClass& m) = default;
	//MyClass(const MyClass& m) = delete;

	virtual ~MyClass();

private:

	/// page 167, In-Class Member Initializers, since C++11
	int mInt = 1;
	std::string mStr = "test";

	const int mConstInt;
};

class MyClass2
{
public:

	/// page 160
	MyClass2() = delete; // C++11

	explicit MyClass2(int i) = delete;
};

