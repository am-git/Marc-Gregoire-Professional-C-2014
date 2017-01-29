#pragma once

class MyClass
{
public:

	/// page 159
	MyClass() = default; // C++11

	MyClass(const MyClass& m) = default;
	//MyClass(const MyClass& m) = delete;

	virtual ~MyClass();
};

class MyClass2
{
public:

	/// page 160
	MyClass2() = delete; // C++11

	MyClass2(int i) = delete;
};

