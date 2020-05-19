#pragma once
#include "Ethnicity.h"

class  Asian : public oBlood, bBlood, aBlood, abBlood
{
public:
	Asian();
	void classPurpose();
	Asian(double& pop);
	Asian(double blood, double& pop);
	Asian& operator = (const Asian& rhs);
	Asian(const Asian& copy);
	Asian& operator = (Asian&& rhs) noexcept;
	Asian(Asian&& copy) noexcept;
	~Asian();

protected:
	double m_userIn;
	const double asianPop = 0.0602;
};