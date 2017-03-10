#include "stdafx.h"
#include <iostream>

#include "MoveSemantics.h"

using namespace std;
using namespace ch10;

MSItem::MSItem(const MSItem& ms)
{
	cout << "Copy constructor" << endl;
	mVec = ms.mVec;
}


MSItem& MSItem::operator = (const MSItem& ms)
{
	cout << "Assignment operator" << endl;
	if(this == &ms)
	{
		return *this;
	}
	mVec = ms.mVec;
	return *this;
}

void TestMS()
{
	
}

