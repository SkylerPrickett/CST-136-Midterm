#pragma once
#include "bloodType.h"

class bBlood :virtual public bloodType
{
public:
	bBlood();
	virtual void classPurpose();
	bBlood(double& blood);
	bBlood& operator = (const bBlood& rhs);
	bBlood(const bBlood& copy);
	bBlood& operator = (bBlood&& rhs) noexcept;
	bBlood(bBlood&& copy) noexcept;
	~bBlood();

protected:
	double bCaucasian = 0.11;
	double bAsian = 0.254;
	double bAfricanAm = 0.19;
	double bHisLat = 0.10;
	double userIn;
};