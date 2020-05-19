#pragma once

#include "bloodType.h"

class oBlood : virtual public bloodType
{
public:
	oBlood();
	oBlood(double& blood);
	virtual void classPurpose();
	oBlood& operator = (const oBlood& rhs);
	oBlood(const oBlood& copy);
	oBlood& operator = (oBlood&& rhs) noexcept;
	oBlood(oBlood&& copy) noexcept;
	~oBlood();

protected:
	const double oCaucasian = 0.45;
	const double oAsian = 0.40;
	const double oAfricanAm = 0.51;
	const double oHisLat = 0.57;
	double userIn = 0;
};