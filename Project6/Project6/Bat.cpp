//liron hamo 207973603
#include "Bat.h"
#include <array>
#include <iostream>
#include <string>
using namespace std;

Bat::Bat(string food, string name, string nickname, float age, const string department, float FoodPerDay):
	Animal { name, nickname,age,department,FoodPerDay }//constructor by parmeters
{
	this->food = food;
}

Bat::Bat(Bat& other) : Animal(other) {//copy constructor
	this->food = other.food;
}

void Bat::eat() {//what bat eat
	cout << "Bat" << id << " eats every day " << FoodPerDay << "Kg of" << food<<  endl;
}

void Bat::sleep() {
	cout << " Bat" << id << " sleeps only at day\n";
}

void  Bat::print() {
	Animal::print();//print all data from animal 
	cout << "it food:" << food<< endl;//print the spcial data
}
 

Bat::~Bat()
{
}
