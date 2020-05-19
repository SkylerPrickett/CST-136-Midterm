#pragma once

#include "Ethnicity.h"

class  africanAmerican : public oBlood, bBlood, aBlood, abBlood
{
public:
	africanAmerican();
	void classPurpose();
	africanAmerican(double& pop);
	africanAmerican(double blood, double& pop);
	africanAmerican& operator = (const africanAmerican& rhs);
	africanAmerican(const africanAmerican& copy);
	africanAmerican& operator = (africanAmerican&& rhs) noexcept;
	africanAmerican(africanAmerican&& copy) noexcept;
	~africanAmerican();

protected:
	double m_userIn;
	const double africanAmPop = 0.1367;
};