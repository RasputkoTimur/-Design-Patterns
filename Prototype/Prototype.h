#pragma once
#include <string>
using namespace std;
class Prototype
{
protected:
	Prototype(Prototype &obj) {
		obj.name = this->name;
	};
public:
	string name;
	Prototype(){}
	Prototype* clone();
};

