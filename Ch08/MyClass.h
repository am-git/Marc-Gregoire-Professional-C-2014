#pragma once
#include <string>

namespace ch08
{
	class MyClass
	{
	public:

		MyClass() = default;
		virtual ~MyClass() = default;

		void foo(const int);

		/// page 196. You can prevent the compiler from performing this conversion
		/// by explicitly deleting a double	instance of foo()
		void foo(const double) = delete;

	private:

		int mInt = 0;
	};

} // namespace ch08


