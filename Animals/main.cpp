#include <iostream>
#include "myLibrary.h"
using namespace std;

void MyFuncSwim(ISwim* ptr)
{
	ptr->Swim();
}
void MyFuncFly(IFly* ptr)
{
	ptr->Fly();
}

int main() {
	Parrot obj("Jaco", 1, "africa");
	//Animal* ptr = &obj;
	//ptr->Print();
	//ptr->Eat();
	//ptr->Continent();
	MyFuncFly(&obj);



	Airplane obj1;
	MyFuncFly(&obj1);
}