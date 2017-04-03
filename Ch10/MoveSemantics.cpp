#include "stdafx.h"
#include <iostream>

#include "MoveSemantics.h"

using namespace std;
using namespace ch10;

MSItem::MSItem(const MSItem& ms) noexcept
{
	cout << "Copy constructor" << endl;
	mVec = ms.mVec;
}


MSItem& MSItem::operator = (const MSItem& ms) noexcept
{
	cout << "Assignment operator" << endl;
	if(this == &ms)
	{
		return *this;
	}
	mVec = ms.mVec;
	return *this;
}


MSItem::MSItem(MSItem&& ms) noexcept
{
	cout << "Move constructor" << endl;
	mVec = ms.mVec;

}

MSItem& MSItem::operator = (MSItem&& ms) noexcept
{
	cout << "Move Assignment operator" << endl;
	if (this == &ms)
	{
		return *this;
	}
	mVec = ms.mVec;
	return *this;
}


void ch10::TestMS() noexcept
{
	vector<MSItem> mVec2;

	for (auto i=0; i<40; ++i)
	{
		cout << "i = " << i << endl;
		MSItem ms;
		mVec2.push_back(ms);
		cout << endl;
	}
}

