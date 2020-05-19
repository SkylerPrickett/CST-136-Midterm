#include "Asian.h"

Asian::Asian() :m_userIn(0) {}

void Asian::classPurpose() {
	cout << "in Asian.cpp" << endl;
}

Asian::Asian(double& pop) :m_userIn(0) {
	cout << "If you would like to change the parameters for Asian population:" << endl;
	cout << "enter it in the format of .67 for 67% etc (value can't exceed 1), if you would like to keep" << endl;
	cout << "the current parameters enter -1.\n" << endl;

	cout << "If you enter an invalid value, the original value will be kept\n" << endl;

	cin >> m_userIn;

	if (m_userIn >= 0 && m_userIn <= 1) {
		pop = m_userIn;

	}

	else {
		pop = asianPop;
	}

}


Asian& Asian::operator = (const Asian& rhs)
{
	//	cout << "Asian copy =" << endl;
	if (this != &rhs)
	{
		m_userIn = rhs.m_userIn;
	}
	return *this;
}

Asian::Asian(const Asian& other)
{
	//	cout << "Asian copy ctor" << endl;
}

Asian& Asian::operator = (Asian&& rhs) noexcept
{
	//	cout << "Asian move =" << endl;

	if (this != &rhs) {
		m_userIn = rhs.m_userIn;
		rhs.m_userIn = NULL;
	}
	return *this;
}

Asian::Asian(Asian&& other) noexcept
{
	//	cout << "Asian move ctor" << endl;
}


Asian::Asian(double blood, double& pop) {

	Ethnicity(blood, pop);
}

Asian::~Asian() {}