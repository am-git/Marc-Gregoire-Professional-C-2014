#pragma once

#include <string>

class SpreadsheetCell
{

public:
	SpreadsheetCell() = default;
	explicit SpreadsheetCell(const double);
	explicit SpreadsheetCell(const std::string&);

	virtual ~SpreadsheetCell() = default;

	//SpreadsheetCell(const SpreadsheetCell&) = delete;
	//SpreadsheetCell& operator = (SpreadsheetCell&) = delete;

	void setValue(const double inValue);
	double getValue() const;
	void setString(const std::string& inString);
	const std::string& getString() const;

private:

	static std::string doubleToString(const double inValue);
	static double stringToDouble(const std::string& inString);

	std::string m_string_;
	double mValue;

};

