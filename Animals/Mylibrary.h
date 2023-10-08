#pragma once
#include <iostream>
using namespace std;

struct IFly {				
	virtual void Fly() = 0;
};

struct ISwim {				
	virtual void Swim() = 0;
};

class Animal
{
protected:
	char* name;
	int kg;
public:
	Animal() = default;
	Animal(const char* n, int k)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		kg = k;
	}
	void Print()
	{
		cout << "Name: " << name << "\n Kg: " << kg << endl;
	}
	virtual void Continent() = 0;
	virtual void Eat() = 0;
	virtual void Sound() = 0;

	~Animal()
	{
		delete[] name;
	}
};


class Parrot : public Animal, public IFly {
	char* continent;
public:
	Parrot() = default;
	Parrot(const char* n, int kg, const char* cont) : Animal(n, kg) {
		continent = new char[strlen(cont) + 1];
		strcpy_s(continent, strlen(cont) + 1, cont);
	}
	virtual void Sound() {
		cout << "Parrots  make some sounds" << endl;
	}
	virtual void Eat() {
		cout << "Parrots eat seeds" << endl;
	}
	virtual void Continent() {
		cout << "Parrots live in warm country" <<  endl;
	}
	virtual void Fly() {
		cout << "Parrots can fly" << endl;
	}
	~Parrot()
	{
		delete[] continent;
	}
};

class Airplane : public IFly {
public:
	virtual void Fly() {
		cout << "Plane can fly " << endl;
	}
};