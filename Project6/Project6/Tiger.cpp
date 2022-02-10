//liron hamo 207973603
#include "Tiger.h"
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;



Tiger::Tiger(const float maxSpeed, string name, string nickname, float age, const string department, float FoodPerDay) :
	Animal(name, nickname, age, department, FoodPerDay), maxSpeed{ maxSpeed }// prameters constuctor
{
}

Tiger::Tiger(Tiger& other) : Animal(other),maxSpeed{other.maxSpeed}//copy constructor
{
}


void Tiger::eat(){
	cout << "Tiger" << id << " eats every day " << FoodPerDay << "Kg meat\n" << endl;
}

void Tiger::sleep() {
	cout << "Tiger" << id << "sleeps only at night\n";
}

void Tiger::print(){//print data of the tiger
	this->Animal::print();
	cout << " it max speed:" << maxSpeed<< endl;//print the special data
}


Tiger::~Tiger()
{

}
