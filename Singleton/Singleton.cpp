#include "Singleton.h"

Singleton* Singleton::getInstance()
{
	if (Singleton::s == nullptr)
	{
		Singleton::s = new Singleton();
	}
	return Singleton::s;
}