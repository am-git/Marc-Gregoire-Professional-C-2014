#pragma once

#include <initializer_list>
#include <vector>

class EvenSequence
{
public:
	EvenSequence(std::initializer_list<double>);

	virtual ~EvenSequence();

private:
	std::vector<double> mSequence;
};

