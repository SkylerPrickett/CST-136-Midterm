#pragma once
#include "bloodType.h"

class aBlood : virtual public bloodType
{
public:
	aBlood();
	virtual void classPurpose();
	aBlood& operator = (const aBlood& rhs);
	aBlood(const aBlood& copy);
	aBlood& operator = (aBlood&& rhs) noexcept;
	aBlood(aBlood&& copy) noexcept;
	aBlood(double& blood);
	~aBlood();

protected:
	double aCaucasian = 0.4;
	double aAsian = 0.275;
	double aAfricanAm = 0.26;
	double aHisLat = 0.31;
	double userIn;
};