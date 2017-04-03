#pragma once

/// page 305

class A
{
	
};

class ExplicitConversion
{
public:
	ExplicitConversion() = default;
	virtual ~ExplicitConversion() = default;

	explicit operator int() const noexcept;
	operator A() const { A a; return a; }

	static void Test() noexcept;
};

