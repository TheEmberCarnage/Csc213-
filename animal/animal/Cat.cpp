#include<iostream>
#include"Animal.h"
#include"Cat.h"
using namespace std;

Cat::Cat(int a, string name, int pSize, string Colour):Animal(a, name) {
	PawSize = pSize;
	Colour = Colour;
	cout << "Cat Created \n";
}
Cat::~Cat() {
	cout << "Cat Destroyed \n";
}