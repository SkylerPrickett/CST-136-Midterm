#include "abBlood.h"

abBlood::abBlood():userIn(0) {}

void abBlood::classPurpose() {
	cout << "in abBlood.cpp" << endl;
}

abBlood::abBlood(double& blood):userIn(blood) {

	if (blood == 1) {
		blood = abCaucasian;
	}
	else if (blood == 2) {
		blood = abAfricanAm;
	}
	else if (blood == 3) {
		blood = abAsian;
	}
	else if (blood == 4) {
		blood = abHisLat;
	}
}

abBlood& abBlood::operator = (const abBlood& rhs)
{
	//	cout << "oBlood copy =" << endl;
	if (this != &rhs)
	{
		userIn = rhs.userIn;
	}
	return *this;
}

abBlood::abBlood(const abBlood& other)
{
	//	cout << "oBlood copy ctor" << endl;
}
abBlood& abBlood::operator = (abBlood&& rhs) noexcept
{
	//	cout << "oBlood move =" << endl;

	if (this != &rhs) {
		userIn = rhs.userIn;
		rhs.userIn = NULL;
	}
	return *this;
}

abBlood::abBlood(abBlood&& other) noexcept
{
	//	cout << "oBlood move ctor" << endl;
}

abBlood::~abBlood() {}