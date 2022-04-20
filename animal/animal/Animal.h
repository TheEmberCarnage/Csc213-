
#include <iostream>
using namespace std;


class Animal {
private:
	int age;
	string name;
	
public:
	Animal(int, string);
	~Animal();
	virtual void print() { cout << "\n Animal Print"; }
};
