#pragma once
class Attributes
{
public:
	Attributes() = default;
	virtual ~Attributes() = default;

	[[noreturn]] void func_noreturn() noexcept(false);

	static void Test() noexcept;

private:
	int mInt = 99;
};

