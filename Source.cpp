//Skyler Prickett
//Midterm Lab

#include "commandClass.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	bool control = 1;
	int in = 0;
	commandClass entity;
	commandClass notentity;
	system("color 0b");


	entity.dataRef();
	system("pause");
	system("cls");

	while (control != 0) {
		control = entity.start();
		system("pause");
		system("cls");

	}

	cout << "To see operator overload testing enter 1, otherwise enter 0" << endl;
	cin >> in;
	if (in == 1) {
		cout << "Now displaying how operator overloading for commandClass objects occurs" << endl;
		cout << "For reference in checking if functions work: entity = 10, notentity = 1" << endl;
		entity = 10;
		notentity = 1;

		entity.operatorOverld(10, 1);
	}
	else if (in == 0){
	}
	else  {
		throw std::out_of_range("Input was invalid");
	}


	return 0;
}