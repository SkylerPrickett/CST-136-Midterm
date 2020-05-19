#include "commandClass.h"

commandClass::commandClass():userIn(0) {}


bool commandClass::start() {
	cout << "To calculate for:\nType O Blood enter 1, Type A = 2, Type B = 3, Type AB = 4" << endl;
	cout << "Or enter any other number to exit this part of the program" << endl;
	cin >> userIn;

	if (userIn != 1 && userIn != 2 && userIn != 3 && userIn != 4) {
		cout << "Exiting program. . ." << endl;

		return 0;
	}

	num[0] = userIn;
	cout << "To calculate for:\nCaucasian Population enter 1, African American Pop, = 2, Asian Pop. = 3, Hispanic/Latino Pop. = 4" << endl;
	cout << "Or enter any other number to exit this part of the program" << endl;
	cin >> userIn;

	if (userIn != 1 && userIn != 2 && userIn != 3 && userIn != 4) {
		cout << "Exiting program. . ." << endl;
	
		return 0;
	}

	num[1] = userIn;

	bloodType* ray[3];
	ray[2] = 0;

	if (num[0] == 1) {
		num[0] = num[1];
		ray[0] = new oBlood(num[0]);
		ray[0]->classPurpose();
		cout << endl << num[0] << endl;
	}
	else if (num[0] == 2) {
		num[0] = num[1];
		ray[0] = new aBlood(num[0]);
		ray[0]->classPurpose();
		cout << endl << num[0] << endl;
	}
	else if (num[0] == 3) {
		num[0] = num[1];
		ray[0] = new bBlood(num[0]);
		ray[0]->classPurpose();
		cout << endl << num[0] << endl;
	}
	else if (num[0] == 4) {
		num[0] = num[1];
		ray[0] = new abBlood(num[0]);
		ray[0]->classPurpose();
		cout << endl << num[0] << endl;
	}

	if (num[1] == 1) {
		ray[1] = new Caucasian(num[1]);
		ray[1]->classPurpose();
		cout << endl << num[1] << endl;
		ray[2] = new Caucasian(num[0], num[1]);
		cout << "The population of America with the defined parameters is: " << num[1] << endl;
	}
	else if (num[1] == 2) {
		ray[1] = new africanAmerican(num[1]);
		ray[1]->classPurpose();
		cout << endl << num[1] << endl;
		ray[2] = new africanAmerican(num[0], num[1]);
		cout << "The population of America with the defined parameters is: " << num[1] << endl;
	}
	else if (num[1] == 3) {
		ray[1] = new Asian(num[1]);
		ray[1]->classPurpose();
		cout << endl << num[1] << endl;
		ray[2] = new Asian(num[0], num[1]);
		cout << "The population of America with the defined parameters is: " << num[1] << endl;
	}
	else if (num[1] == 4) {
		ray[1] = new hispLatino(num[1]);
		ray[1]->classPurpose();
		cout << endl << num[1] << endl;
		ray[2] = new hispLatino(num[0], num[1]);
		cout << "The population of America with the defined parameters is: " << num[1] << endl;
	}


	delete ray[0];
	delete ray[1];
	delete ray[2];

	return 1;
}


void commandClass::dataRef() {

	cout << "I obtained all population parameter data from the following two sources: " << endl;
	cout << "https://www.redcrossblood.org/donate-blood/blood-types.html " << endl;
	cout << "https://www.census.gov/quickfacts/fact/table/US/PST045218 \n" << endl;

	cout << "I had to adjust the data from the census by taking the four main ethnic \ngroups' number of people from the data (Caucasian, Asian, African American, Hispanic-Lantinx)" << endl;
	cout << " and adding them together and then dividing the number of people of \neach population group from the sum of the four groups.\n" << endl;
	cout << "These calculations, (number of people(one group)/number of people (sum of groups), \nbecame the new population percentages in the program.\n" << endl; 
	cout << "This means that when I state population of America, \nI mean strictly out of the earlier stated four" << endl;
	cout << "ethnic groups which make up 98 % of the data according to the US Census of 2019.\n" << endl;

}


commandClass::~commandClass() {}




commandClass::commandClass(int i)
{
	someNum = i;

}


bool commandClass::operator>(const commandClass& other) const
{
	bool check = false;
	check = false;

	if (other.someNum < someNum) {
	
		check = true;
	}

	return check;
}

bool commandClass::operator<(const commandClass& other) const
{
	bool check = false;
	check = false;

	if (other.someNum > someNum) {

		check = true;
	}

	return check;
}

bool commandClass::operator==(const commandClass& other) const
{
	bool check = false;
	check = false;

	if (other.someNum == someNum) {

		check = true;
	}

	return check;
}

bool commandClass::operator!=(const commandClass& other) const
{
	bool check = false;
	check = false;

	if (other.someNum != someNum) {

		check = true;
	}

	return check;
}


bool commandClass::operator>=(const commandClass& other) const
{
	bool check = false;
	check = false;

	if (other.someNum <= someNum) {

		check = true;
	}

	return check;
}

bool commandClass::operator<=(const commandClass& other) const
{
	bool check = false;
	check = false;

	if (other.someNum >= someNum) {

		check = true;
	}

	return check;
}

commandClass& commandClass::operator = (const commandClass& rhs)
{
	//	cout << "commandClass copy =" << endl;
	if (this != &rhs)
	{
		someNum = rhs.someNum;
	}
	return *this;
}

commandClass::commandClass(const commandClass& other)
{
	//	cout << "commandClass copy ctor" << endl;
}

commandClass& commandClass::operator = (commandClass&& rhs) noexcept
{
	//	cout << "commandClass move =" << endl;

	if (this != &rhs) {
		someNum = rhs.someNum;
		rhs.someNum = NULL;
	}
	return *this;
}

commandClass::commandClass(commandClass&& other) noexcept
{
	//	cout << "commandClass move ctor" << endl;
}

void commandClass::operatorOverld(commandClass entity, commandClass notentity)
{
	if (entity > notentity) {

		cout << "entity > notentity" << endl;
	}
	else {
		cout << "entity > notentity was not true" << endl;
	}


	if (notentity < entity) {

		cout << "notentity < entity" << endl;
	}
	else {
		cout << "notentity < entity was not true" << endl;
	}

	if (entity >= notentity) {

		cout << "entity >= notentity" << endl;
	}
	else {
		cout << "entity >= notentity was not true" << endl;
	}


	if (notentity <= entity) {

		cout << "notentity <= entity" << endl;
	}
	else {
		cout << "notentity <= entity was not true" << endl;
	}

	if (notentity == entity) {

		cout << "notentity == entity" << endl;
	}
	else {
		cout << "notentity == entity was not true" << endl;
	}

	if (notentity != entity) {

		cout << "notentity != entity" << endl;
	}
	else {
		cout << "notentity != entity was not true" << endl;
	}

}

