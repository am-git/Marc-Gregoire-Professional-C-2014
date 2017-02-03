// Ch08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <memory>

#include "MyClass.h"

using namespace ch08;

int main()
{
	auto pmc1 = std::make_unique<MyClass>();
	pmc1->foo(90);

	/// page 196
	// pmc1->foo(901.); // error

    return 0;
}

