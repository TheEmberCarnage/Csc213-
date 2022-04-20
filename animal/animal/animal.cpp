#include"Animal.h"
#include<iostream>
using namespace std;

Animal::Animal(int a, string name)
{
	age = a;
	name = name;
	cout << "Animal Created \n";
}
Animal::~Animal() {
	cout << "Animal Destroyed \n";
}

void printAnimal(Animal* animal) {
	animal->print();
}

