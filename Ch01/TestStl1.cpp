#include "stdafx.h"

#include <vector>
#include <iostream>
#include <string>

#include "Ch01.h"

using namespace std;

void ch01::TestStl1()
{
	// Create a vector of strings, using uniform initialization
	vector<wstring> myVector = { L"A first string", L"A second string" };

	// Add some strings to the vector using push_back
	myVector.push_back(L"A third string");
	myVector.push_back(L"The last string in the vector");

	// Print the elements using a range-based for loop
	for (const auto& str : myVector) /// C++11
		wcout << str << endl;

	// Iterate over the elements in the vector and print them once more
	for (auto iterator = cbegin(myVector);	iterator != cend(myVector); ++iterator) { /// C++11
		wcout << *iterator << endl;
	}
	// http://stackoverflow.com/questions/12001410/what-is-the-reason-behind-cbegin-cend

}