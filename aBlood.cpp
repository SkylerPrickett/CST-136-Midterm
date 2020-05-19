#include "aBlood.h"

aBlood::aBlood():userIn(0) {}

void aBlood::classPurpose() {
	cout << "in aBlood.cpp" << endl;
}

aBlood::aBlood(double& blood):userIn(blood) {

	if (blood == 1) {
		blood = aCaucasian;
	}
	else if (blood == 2) {
		blood = aAfricanAm;
	}
	else if (blood == 3) {
		blood = aAsian;
	}
	else if (blood == 4) {
		blood = aHisLat;
	}
}

aBlood& aBlood::operator = (const aBlood& rhs)
{
	//	cout << "oBlood copy =" << endl;
	if (this != &rhs)
	{
		userIn = rhs.userIn;
	}
	return *this;
}

aBlood::aBlood(const aBlood& other)
{
	//	cout << "oBlood copy ctor" << endl;
}

aBlood& aBlood::operator = (aBlood&& rhs) noexcept
{
	//	cout << "oBlood move =" << endl;

	if (this != &rhs) {
		userIn = rhs.userIn;
		rhs.userIn = NULL;
	}
	return *this;
}

aBlood::aBlood(aBlood&& other) noexcept
{
	//	cout << "oBlood move ctor" << endl;
}

aBlood::~aBlood() {}