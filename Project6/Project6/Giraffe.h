//liron hamo 207973603
#pragma once
#include "Animal.h"

class Giraffe :public Animal
{
public:
	Giraffe(float height, string name, string nickname, float age, const string department, float FoodPerDay);
	Giraffe(Giraffe& other);//copy constructor
	float getHeight() { return height; };
	void eat();
	void sleep();
	void print();
	~Giraffe();
private:
	float height;//special data

};

