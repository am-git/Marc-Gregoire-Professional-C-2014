#pragma once

class Super
{
public:
	Super() = default;
	virtual ~Super() = default;

	virtual void someMethod(int i, int j);
	virtual void someMethod(){};
};

class Sub : public Super
{
public:
	Sub() = default;;
	virtual ~Sub() = default;

	using Super::someMethod;
	virtual void someMethod(const int i){};
};

