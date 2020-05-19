#include "Ethnicity.h"

Ethnicity::Ethnicity() {}

void Ethnicity::classPurpose() {
	cout << "in Ethnicity.cpp" << endl;
}

Ethnicity::Ethnicity(double blood, double& pop) {

	pop *= blood;

}

Ethnicity::~Ethnicity() {}