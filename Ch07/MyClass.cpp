#include "stdafx.h"
#include "MyClass.h"

using namespace ch07;

MyClass::~MyClass()
{
}

/// page 167, Delegating Constructors
/// Delegating constructors allow constructors to call another constructor from the same class. However,
/// this call cannot be placed in the constructor body; it must be in the constructor initializer and it must
/// be the only member - initializer in the list
MyClass::MyClass(const int i, const std::string& s) : MyClass(i)
{
	
}


MyClass::MyClass(const std::string& s) : mStr(s), mConstInt(s.size())
{
	
}

MyClass::MyClass(const int i) : mInt(i), mConstInt(i)
{
	
}
