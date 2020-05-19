#pragma once
#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <Windows.h>
#include <crtdbg.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class bloodType {
public:
	bloodType();
	virtual ~bloodType();
	virtual void classPurpose();

private:
	int number = 0;
};