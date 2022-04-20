#include<iostream>
#include"Animal.h"

class Cat : public Animal {
private:
	int PawSize;
	string Colour;
public:
	Cat(int, string, int, string);
	~Cat();
	void print() {
		Animal::print(); cout << "\n Cat Print";
	}
};