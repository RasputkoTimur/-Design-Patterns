#pragma once
class Singleton
{
private:
	Singleton();
	static Singleton* s;
	int instance;
public:
	static Singleton* getInstance();
};

