#pragma once
#include "abBlood.h"
#include "aBlood.h"
#include "oBlood.h"
#include "bBlood.h"
#include "africanAmerican.h"
#include "Caucasian.h"
#include "Asian.h"
#include "hispLatino.h"

class commandClass {


public:
	commandClass();
	~commandClass();
	bool start();
	void dataRef();
	commandClass(int i);
	bool operator >(const commandClass& other) const;
	bool operator <(const commandClass& other) const;
	bool operator ==(const commandClass& other) const;
	bool operator !=(const commandClass& other) const;
	bool operator >=(const commandClass& other) const;
	bool operator <=(const commandClass& other) const;
	commandClass& operator = (const commandClass& rhs);
	commandClass(const commandClass& copy);
	commandClass& operator = (commandClass&& rhs) noexcept;
	commandClass(commandClass&& copy) noexcept;
	
	void operatorOverld(commandClass entity, commandClass notentity);

private:
	double num[2]{ 0 };
	int userIn = 0;
	int someNum;
};