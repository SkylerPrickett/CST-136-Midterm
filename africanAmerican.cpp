#include "africanAmerican.h"

africanAmerican::africanAmerican():m_userIn(0) {}

void africanAmerican::classPurpose() {
	cout << "in africanAmerican.cpp" << endl;
}

africanAmerican::africanAmerican(double& pop) :m_userIn(0) {
	cout << "If you would like to change the parameters for African American population:" << endl;
	cout << "enter it in the format of .67 for 67% etc (value can't exceed 1), if you would like to keep" << endl;
	cout << "the current parameters enter -1.\n" << endl;

	cout << "If you enter an invalid value, the original value will be kept\n" << endl;

	cin >> m_userIn;

	if (m_userIn >= 0 && m_userIn <= 1) {
		pop = m_userIn;

	}

	else {
		pop = africanAmPop;
	}

}

africanAmerican& africanAmerican::operator = (const africanAmerican& rhs)
{
	//	cout << "africanAmerican copy =" << endl;
	if (this != &rhs)
	{
		m_userIn = rhs.m_userIn;
	}
	return *this;
}

africanAmerican::africanAmerican(const africanAmerican& other)
{
	//	cout << "africanAmerican copy ctor" << endl;
}

africanAmerican& africanAmerican::operator = (africanAmerican&& rhs) noexcept
{
	//	cout << "africanAmerican move =" << endl;

	if (this != &rhs) {
		m_userIn = rhs.m_userIn;
		rhs.m_userIn = NULL;
	}
	return *this;
}

africanAmerican::africanAmerican(africanAmerican&& other) noexcept
{
	//	cout << "africanAmerican move ctor" << endl;
}

africanAmerican::africanAmerican(double blood, double& pop) {

	Ethnicity(blood, pop);
}

africanAmerican::~africanAmerican() {}