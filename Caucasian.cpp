#include "Caucasian.h"

Caucasian::Caucasian() :m_userIn(0)
{}

void Caucasian::classPurpose() {
	cout << "in Caucasian.cpp" << endl;
}

Caucasian::Caucasian(double& pop) :m_userIn(0) {
	cout << "If you would like to change the parameters for Caucasian population:" << endl;
	cout << "enter it in the format of .67 for 67% etc (value can't exceed 1), if you would like to keep" << endl;
	cout << "the current parameters enter -1.\n" << endl;
	
	cout << "If you enter an invalid value, the original value will be kept\n" << endl;

	cin >> m_userIn;

	if (m_userIn >= 0 && m_userIn <=1) {
		pop = m_userIn;

	}

	else{
		pop = caucasianPop;
	}

}

Caucasian& Caucasian::operator = (const Caucasian& rhs)
{
	//	cout << "Caucasian copy =" << endl;
	if (this != &rhs)
	{
		m_userIn = rhs.m_userIn;
	}
	return *this;
}

Caucasian::Caucasian(const Caucasian& other)
{
	//	cout << "Caucasian copy ctor" << endl;
}

Caucasian& Caucasian::operator = (Caucasian&& rhs) noexcept
{
	//	cout << "Caucasian move =" << endl;

	if (this != &rhs) {
		m_userIn = rhs.m_userIn;
		rhs.m_userIn = NULL;
	}
	return *this;
}

Caucasian::Caucasian(Caucasian&& other) noexcept
{
	//	cout << "Caucasian move ctor" << endl;
}

Caucasian::Caucasian(double blood, double& pop) {

	Ethnicity(blood, pop);
}

Caucasian::~Caucasian() {}