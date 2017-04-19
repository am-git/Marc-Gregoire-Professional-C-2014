#include "stdafx.h"
#include "ExplicitConversion.h"

void ExplicitConversion::Test() noexcept
{
	ExplicitConversion ec;

	auto a = static_cast<int>(ec);
}

ExplicitConversion::operator int() const noexcept
{
	return 1; //
}
