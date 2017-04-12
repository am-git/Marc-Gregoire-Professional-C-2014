#pragma once

//
// page 306
//

class Attributes
{
public:
	Attributes() = default;
	virtual ~Attributes() = default;

	[[noreturn]]
	static void Test_noreturn() noexcept(false);

	static void Test_carries_dependency() noexcept;

	[[deprecated("Use fun123")]]
	static void Test_deprecated() noexcept;

	static void Test_fallthrough(const int n) noexcept;

	static void Test() noexcept;

private:
	static int mInt;// = 99;
};

