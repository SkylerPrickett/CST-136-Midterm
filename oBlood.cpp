#include "oBlood.h"

oBlood::oBlood():userIn(0) {

}

oBlood::oBlood(double& blood) : userIn(blood) {
	

	if (blood == 1) {
		blood = oCaucasian;
	}
	else if (blood == 2) {
		blood = oAfricanAm;
	}
	else if (blood == 3) {
		blood = oAsian;
	}
	else if (blood == 4) {
		blood = oHisLat;
	}
}

oBlood& oBlood::operator = (const oBlood& rhs)
{
	//	cout << "oBlood copy =" << endl;
	if (this != &rhs)
	{
		userIn = rhs.userIn;
	}
	return *this;
}

oBlood::oBlood(const oBlood& other)
{
	//	cout << "oBlood copy ctor" << endl;
}

oBlood& oBlood::operator = (oBlood&& rhs) noexcept
{
	//	cout << "oBlood move =" << endl;

	if (this != &rhs) {
		userIn = rhs.userIn;
		rhs.userIn = NULL;
	}
	return *this;
}

oBlood::oBlood(oBlood&& other) noexcept
{
	//	cout << "oBlood move ctor" << endl;
}

void oBlood::classPurpose() {
	cout << "In oBlood.cpp" << endl;
}

oBlood::~oBlood() {}