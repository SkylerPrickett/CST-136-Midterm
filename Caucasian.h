#pragma once
#include "Ethnicity.h"

class  Caucasian: public oBlood, bBlood, aBlood, abBlood
{
public:
	Caucasian();
	void classPurpose();
	Caucasian(double& pop);
	Caucasian(double blood, double& pop);
	Caucasian& operator = (const Caucasian& rhs);
	Caucasian(const Caucasian& copy);
	Caucasian& operator = (Caucasian&& rhs) noexcept;
	Caucasian(Caucasian&& copy) noexcept;
	~Caucasian();
protected:
	double m_userIn;
	const double caucasianPop = 0.6163;
};