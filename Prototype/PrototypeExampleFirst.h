#pragma once
#include "Prototype.h"
class PrototypeExampleFirst : public Prototype
{
private:
	int volume;
public:
	PrototypeExampleFirst(PrototypeExampleFirst& obj) {
		this->name = obj.name;
		this->volume = obj.volume;
	}
	PrototypeExampleFirst *clone();
};

