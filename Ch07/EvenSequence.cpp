#include "stdafx.h"
#include "EvenSequence.h"

using namespace std;

EvenSequence::~EvenSequence()
{
}

/// page 165
EvenSequence::EvenSequence(initializer_list<double> args)
{
	if (args.size() % 2 != 0) {
		throw invalid_argument("initializer_list should "
			"contain even number of elements.");
	}
	mSequence.reserve(args.size());
	for (auto value : args) {
		mSequence.push_back(value);
	}
}
