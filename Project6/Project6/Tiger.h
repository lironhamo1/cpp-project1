//liron hamo 207973603
#pragma once
#include "Animal.h"

class Tiger :public Animal
{
public: 
	Tiger(float maxSpeed,string name, string nickname, float age, const string department, float FoodPerDay);
	Tiger(Tiger& other);//copy constructor
	const float getMaxspeed() { return maxSpeed; };
	void eat();
	void sleep();
	void print();
	~Tiger();
private:
	const float maxSpeed;//special data

};

