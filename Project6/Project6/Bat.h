//liron hamo 207973603
#pragma once
#include <string>
#include "Animal.h" 

class Bat: public Animal
{
public:
	Bat(string food, string name, string nickname, float age, const string department, float FoodPerDay);
	Bat(Bat& other);//copy constructor
	const string getfood() { return food; };
	void eat();//print eat
	void sleep();//print sleep
	void print();//print data
	~Bat();
private:
	std::string food; //special data
};

