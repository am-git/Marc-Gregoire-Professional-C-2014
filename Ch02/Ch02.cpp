// Ch02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

int main()
{
	using namespace std;
	using namespace std::string_literals;

	///
	/// page 53
	///

	/// A string literal in source code is usually interpreted as a const char*.You can use the standard
	/// user - defined literal "s" to interpret a string literal as an std::string instead.For example :
	auto string1 = "Hello World"; // string1 will be a const char*
	auto string2 = "Hello World"s; // string2 will be an std::string

	long double d = 3.14L;
	string s = to_string(d);

	// Converting in the other direction is done by the following set of functions, also defined in the std	namespace
	// For example :
	const string s1 = "1234";
	int i = stoi(s1); // i will be 1234

	///
	/// page 54
	///

	// Raw String Literals

	// With a raw string literal you can avoid the need to escape the quotes.The raw string literal starts
	// with R"( and ends with )".
	string str = R"(Hello "World"!)";

	// Raw string literals can span across multiple lines.For example, if you write the following with
	// a normal string literal, you will get a compiler error, because a normal string literal cannot span
	// multiple lines :
	//string str1 = "Line 1
	//Line 2 with \t"; // Error!

	//Instead, you can use a raw string literal as follows :
	string str2 = R"(Line 1
Line 2 with \t)";

	return 0;
}

