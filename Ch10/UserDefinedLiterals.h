#pragma once
#include <complex>
#include "Attributes.h"


std::complex<double> operator"" _i123(long double d);
//{
//	return std::complex<double>(0, d);
//}

Attributes operator"" _Att(char c); // works!

void Test_UserDefinedLiterals();

class UserDefinedLiterals
{
public:
	UserDefinedLiterals();
	~UserDefinedLiterals();
};

