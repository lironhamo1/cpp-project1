//liron hamo 207973603
#pragma once
#include "Animal.h"
#include <vector>
#include <string>

class Zoo
{
public:
	Zoo(string name);//constructor
	const string getName() { return name; };
	Animal** getAnimalsArr() { return animalArr; };
	void addAnimal(Animal* animal);//add animal to the zoo
	Animal* getAnimal(int id);
	bool removeAnimal(int id);
	void feedAllAnimals() const;
	void sleepAnimals() const;
	void PrintZoo() const;
	void print_type(int t); //t==1: tiger,       t==2: giraffe,         t==3: bat
	~Zoo();//destructor
private:
	const std::string name;//name of the zoo
	Animal** animalArr;
	int sizeArr;//how much animals at the zoo

};

