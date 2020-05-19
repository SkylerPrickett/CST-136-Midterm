#pragma once
#include "bloodType.h"

class abBlood : virtual public bloodType
{
public:
	abBlood();
	virtual void classPurpose();
	abBlood& operator = (const abBlood& rhs);
	abBlood(const abBlood& copy);
	abBlood& operator = (abBlood&& rhs) noexcept;
	abBlood(abBlood&& copy) noexcept;
	abBlood(double& blood);
	~abBlood();

protected:
	double abCaucasian = 0.04;
	double abAsian = 0.071;
	double abAfricanAm = 0.043;
	double abHisLat = 0.022;
	double userIn;
};