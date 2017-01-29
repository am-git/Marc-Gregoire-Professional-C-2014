#include "stdafx.h"
#include <sstream>
#include "SpreadsheetCell.h"

using namespace std;

#pragma region constructors

SpreadsheetCell::SpreadsheetCell(const double inValue) :
	m_string_(doubleToString(inValue)),
	mValue(inValue)
{
	
}

SpreadsheetCell::SpreadsheetCell(const string& inString) :
	m_string_(inString),
	mValue(stringToDouble(inString))
{
	
}

#pragma endregion

void SpreadsheetCell::setValue(const double inValue)
{
	mValue = inValue;
	m_string_ = doubleToString(mValue);
}

double SpreadsheetCell::getValue() const
{
	return mValue;
}

void SpreadsheetCell::setString(const string& inString)
{
	m_string_ = inString;
	mValue = stringToDouble(m_string_);
}

const string& SpreadsheetCell::getString() const
{
	return m_string_;
}

string SpreadsheetCell::doubleToString(const double inValue)
{
	ostringstream ostr;
	ostr << inValue;
	return ostr.str();
}

double SpreadsheetCell::stringToDouble(const std::string& inString)
{
	double temp;
	istringstream istr(inString);
	istr >> temp;
	if (istr.fail() || !istr.eof()) {
		return 0;
	}
	return temp;
}
