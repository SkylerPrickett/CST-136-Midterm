#include "bBlood.h"

bBlood::bBlood():userIn(0) {}

void bBlood::classPurpose() {
	cout << "in bBlood.cpp" << endl;
} 

bBlood::bBlood(double& blood):userIn(blood) {

	if (blood == 1) {
		blood = bCaucasian;
	}
	else if (blood == 2) {
		blood = bAfricanAm;
	}
	else if (blood == 3) {
		blood = bAsian;
	}
	else if (blood == 4) {
		blood = bHisLat;
	}
}

bBlood& bBlood::operator = (const bBlood& rhs)
{
	//	cout << "oBlood copy =" << endl;
	if (this != &rhs)
	{
		userIn = rhs.userIn;
	}
	return *this;
}

bBlood::bBlood(const bBlood& other)
{
	//	cout << "oBlood copy ctor" << endl;
}

bBlood& bBlood::operator = (bBlood&& rhs) noexcept
{
	//	cout << "oBlood move =" << endl;

	if (this != &rhs) {
		userIn = rhs.userIn;
		rhs.userIn = NULL;
	}
	return *this;
}

bBlood::bBlood(bBlood&& other) noexcept
{
	//	cout << "oBlood move ctor" << endl;
}

bBlood::~bBlood() {}