//liron hamo 207973603
#include "Animal.h"
#include <iostream>
#include <array>
#include <string>

using namespace std;

int Animal::count{ 0 };


Animal::Animal(string name, string nickname, float age, const string department, float FoodPerDay): id{++count}, department{ department }//parmeters constructor
{
	this->name = name;
	this->nickname = nickname;
	this->age = age;
	this->FoodPerDay = FoodPerDay;
}

Animal::Animal(Animal &other) : id{ other.id } , department{ other.department }//copry constuctor
{
	this->name = other.name;
	this->nickname = other.nickname;
	this->age = other.age;
	this->FoodPerDay = other.FoodPerDay;
}


void Animal::print() {//print data of the animal
	cout << "Animal department:" << this->department << endl <<
		"Animal name:" << this->name << endl <<
		"Animal nickname:" << this->nickname << endl <<
		"Animal id:" << this->id << endl <<
		"Animal age:" << this->age << endl;
}





Animal::~Animal()
{
}
