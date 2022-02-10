//liron hamo 207973603
#include "Giraffe.h"
#include <iostream>
#include <string>
using namespace std;



Giraffe::Giraffe(float height, string name, string nickname, float age, const string department, float FoodPerDay):
Animal (name,nickname,age, department,FoodPerDay)//parameters constructor
	{
	this->height = height;
}

Giraffe::Giraffe(Giraffe& other) : Animal(other) {//copy constructor
	this->height = other.height;
}

void Giraffe::eat() {//what giraffe eat and haw much
	cout << "Giraffe" << id << " eats every day " << FoodPerDay << " Kg leaves\n" << endl;
}

void  Giraffe::sleep() {
	cout << "Giraffe" << id << " sleeps both day and night\n";
}

void  Giraffe::print() {//print data 
	Animal::print();
	cout << "it height:" << height<< endl;
}


Giraffe::~Giraffe()
{
}
