// Ch07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <memory>

#include "MyClass.h"
#include "SpreadsheetCell.h"

void TestSpreadSheet();

int main()
{
	//MyClass mc;

	//MyClass mc1(mc);

	//MyClass2 mc2;

	TestSpreadSheet();

	return 0;
}

void test1(SpreadsheetCell a)
{
	
}

void TestSpreadSheet()
{
	SpreadsheetCell sc(90);
	SpreadsheetCell sc1(1.0);

	test1(SpreadsheetCell(90));

	//sc1 = sc;

	auto ac = std::make_unique<SpreadsheetCell>();

	//auto sc2 = sc;
}
