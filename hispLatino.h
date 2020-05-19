#pragma once
#include "Ethnicity.h"

class  hispLatino : public oBlood, bBlood, aBlood, abBlood
{
public:
	hispLatino();
	void classPurpose();
	hispLatino(double& pop);
	hispLatino(double blood, double& pop);
	hispLatino& operator = (const hispLatino& rhs);
	hispLatino(const hispLatino& copy);
	hispLatino& operator = (hispLatino&& rhs) noexcept;
	hispLatino(hispLatino&& copy) noexcept;
	~hispLatino();

protected:
	double m_userIn;
	const double hispLatPop = 0.1867;
};