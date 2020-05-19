#include "hispLatino.h"

hispLatino::hispLatino() :m_userIn(0) {

}

void hispLatino::classPurpose() {
	cout << "in hispLatino.cpp" << endl;
}

hispLatino::hispLatino(double& pop) :m_userIn(0) {
	cout << "If you would like to change the parameters for Hispanic/Latinx population:" << endl;
	cout << "enter it in the format of .67 for 67% etc (value can't exceed 1), if you would like to keep" << endl;
	cout << "the current parameters enter -1.\n" << endl;

	cout << "If you enter an invalid value, the original value will be kept\n" << endl;

	cin >> m_userIn;

	if (m_userIn >= 0 && m_userIn <= 1) {
		pop = m_userIn;

	}

	else {
		pop = hispLatPop;
	}

}


hispLatino& hispLatino::operator = (const hispLatino& rhs)
{
	//	cout << "hispLatino copy =" << endl;
	if (this != &rhs)
	{
		m_userIn = rhs.m_userIn;
	}
	return *this;
}

hispLatino::hispLatino(const hispLatino& other)
{
	//	cout << "hispLatino copy ctor" << endl;
}

hispLatino& hispLatino::operator = (hispLatino&& rhs) noexcept
{
	//	cout << "hispLatino move =" << endl;

	if (this != &rhs) {
		m_userIn = rhs.m_userIn;
		rhs.m_userIn = NULL;
	}
	return *this;
}

hispLatino::hispLatino(hispLatino&& other) noexcept
{
	//	cout << "hispLatino move ctor" << endl;
}


hispLatino::hispLatino(double blood, double& pop) {

	Ethnicity(blood, pop);
}

hispLatino::~hispLatino() {}
