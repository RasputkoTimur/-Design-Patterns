#pragma once
#include "Prototype.h"
class PrototypeExampleSecond : public Prototype
{
private:
	int square;
public:
	PrototypeExampleSecond(PrototypeExampleSecond& obj) {
		this->name = obj.name;
		this->square = obj.square;
	}
	PrototypeExampleSecond* clone();
};

