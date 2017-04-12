#include "stdafx.h"
#include "UserDefinedLiterals.h"


UserDefinedLiterals::UserDefinedLiterals()
{
}


UserDefinedLiterals::~UserDefinedLiterals()
{
}

std::complex<double> operator"" _i123(long double d)
{
	return std::complex<double>(0, d);
}

Attributes operator"" _Att(char c)
{
	Attributes a;
	return a;
}

void Test_UserDefinedLiterals()
{
	//auto myDuration = 42min;
}
