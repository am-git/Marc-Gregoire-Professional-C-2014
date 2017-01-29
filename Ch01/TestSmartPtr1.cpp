#include "stdafx.h"

#include <memory>
#include <iostream>

#include "Ch01.h"


class Employee
{
public:
	explicit Employee(const int Age) : m_nAge(Age) {}
	explicit Employee(): Employee(20) {}

	virtual ~Employee()
	{
		std::wcout << " ~Employee(): m_nAge = " << m_nAge << std::endl;
	}

private:
	int m_nAge = -1;

};

void ch01::TestSmartPtr1()
{
	/// page 29
	/// make_unique() is available since C++14.
	auto anEmployee = std::make_unique<Employee>(88); /// C++14

	auto anEmployeeArr = std::make_unique<Employee[]>(3); /// C++14
	std::wcout << "point 1" << std::endl;
	anEmployeeArr[1] = Employee(45);
	std::wcout << "point 2" << std::endl;

	/// page 29
	/// Use std::make_shared<>() to create a shared_ptr.
	auto anEmployeeShare = std::make_shared<Employee>(77); /// C++14

	///auto anEmployeeShareArr = std::make_shared<Employee[]>(5); // page 29. ERROR You cannot store an array in a shared_ptr.

	/// page 29
	/// an example of weak_ptr
	auto anEmployeeWeek = std::weak_ptr<Employee>(anEmployeeShare);
	std::wcout << "anEmployeeWeek.use_count() = " << anEmployeeWeek.use_count() << std::endl;
}
