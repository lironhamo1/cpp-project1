//liron hamo 207973603

#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	Animal(string name, string nickname, float age, const string department, float FoodPerDay);
	Animal(Animal &other);// copy
	string getName() { return name; };
	string getNickName() { return nickname; };
	float getAge() { return age; };//age of the animal 
	const string getDepartment(){ return department; };//class of the animal 
	float getFoodPerDay() { return FoodPerDay; };
	const int getId() { return id; };
	virtual void eat() = 0;//the fun is in the heirs
	virtual void sleep() = 0;//the fun is in the heirs
	void print();//הדפסת פרטים ללא כמות אוכל יומית
	virtual ~Animal();
	static int count;//static const to change the id
protected:
	std::string name;
	std::string nickname;
	float age;
	const std::string department;//מחלקה
	float FoodPerDay; 
	const int id;
	
};

