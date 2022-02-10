//liron hamo 207973603
#include "Zoo.h"
#include "Tiger.h"
#include "Bat.h"
#include "Giraffe.h"
#include "Animal.h"
#include <array>
#include <string>
#include <iostream>
using namespace std;


Zoo::Zoo(string name) : name{ name }
{
	animalArr = NULL;
	sizeArr = 0;
}

void Zoo::addAnimal(Animal* animal) {
	Animal** tmp = NULL;
	tmp = new Animal*[sizeArr + 1];
	for (size_t i{ 0 };i < sizeArr;i++) {
		tmp[i] = animalArr[i];
	}
	tmp[sizeArr] = animal;
	sizeArr++;
	delete[] animalArr;
	animalArr = tmp;
}


Animal* Zoo::getAnimal(int id) {
	for (size_t i{ 0 };i < sizeArr;i++) {
		if (animalArr[i]->getId() == id)
			return animalArr[i];
	}
	return 0;
}


bool Zoo::removeAnimal(int id) {
	for (size_t i{ 0 };i < sizeArr;i++) {
		if (animalArr[i]->getId() == id) {
			animalArr[i] = animalArr[sizeArr - 1];
			sizeArr--;
			cout << "the animal removed\n" << endl;
			return true;
		}
	}
	return false;
}

void Zoo::feedAllAnimals() const {//print what all animals eat
	for (size_t i{ 0 };i < sizeArr;i++) {
		animalArr[i]->eat();
	}
}


void Zoo::sleepAnimals() const {//when the animals sleep
	for (size_t i{ 0 };i < sizeArr;i++) {
		animalArr[i]->sleep();
	}
}


void Zoo::PrintZoo() const {//print all animals at the zoo 
	cout << name << endl << "size of animals:" << sizeArr << endl;
	for (size_t i{ 0 };i < sizeArr;i++) {
		if (auto a = dynamic_cast<Tiger*>(animalArr[i])) {
			a->print();
		}
		if (auto a = dynamic_cast<Giraffe*>(animalArr[i])) {
			a->print();
		}
		if (auto a = dynamic_cast<Bat*>(animalArr[i])) {
			a->print();
		}
	}
}


void Zoo::print_type(int t) {//t==1: tiger,       t==2: giraffe,         t==3: bat
	int tiger = 0, giraffe = 0, bat = 0;
	if (t == 1) {
		for (size_t i{ 0 };i < sizeArr;i++) {
			Animal* tmp = animalArr[i];
			if (dynamic_cast<Tiger*>(tmp)) {
				tmp->print();
				cout << endl;
			}
		}
	}
	else if (t == 2) {
		for (size_t i{ 0 };i < sizeArr;i++) {
			Animal* tmp = animalArr[i];
			if (dynamic_cast<Giraffe*>(tmp)) {
				giraffe++;
				tmp->print();
				cout << endl;
			}
		}
	}
	else if (t == 3) {
		for (size_t i{ 0 };i < sizeArr;i++) {
			Animal* tmp = animalArr[i];
			if (dynamic_cast<Bat*>(tmp)) {
				bat++;
				tmp->print();
				cout << endl;
			}
		}
	}
}




	Zoo::~Zoo()
	{
		for (int i = 0; i < sizeArr;i++) {
			delete[] this->animalArr[i];
		}
		sizeArr = 0;

	}
