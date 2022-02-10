#include "Zoo.h"
#include "Giraffe.h"
#include "Tiger.h"
//liron hamo 207973603
#include "Bat.h"
#include <iostream>
#include <string>
using namespace std;



int main() {
	cout << "liron hamo 207973603\n";
	Zoo safari("safari");
	int size, type, choice, idr,animalnum_7;
	string name, nickname, department, foodbat;
	float age, FoodPerDay,maxSpeed,height;
	do {
		cout << "to add animal press 1\nto remove animal press 2\nto get data about animal press 3\nto feed animals press 4\nto sleeping the animals press 5\nto print zoo press 6\nto print how much from type press 7\nto exit press 8\n";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "how many animals you want?\n";
			cin >> size;
			for (size_t i{ 0 };i < size;i++) {
				cout << "for tiger: 1\n for giraffe: 2\n for bat:3\n ";
				cin >> type;
				if (type > 0 && type < 4) {//check if the value is corect
					cout << "enter the name,nickname, age,department of the animal and food per day\n";
					cin >> name >> nickname >> age >> department >> FoodPerDay;
					if (type == 1) {//build a obj of tiger
						cout << "enter the max speed of the tiger\n";
						cin >> maxSpeed;
						auto tiger = new Tiger(maxSpeed, name, nickname, age, department, FoodPerDay);
						safari.addAnimal(tiger);
					}
					if (type == 2) {//build giraffe obj
						cout << "enter the hegiht of the giraffe\n";
						cin >> height;
						auto giraffe = new Giraffe(height, name, nickname, age, department, FoodPerDay);
						safari.addAnimal(giraffe);
					}
					if (type == 3) {//build bat obj
						cout << "enter the type of food of the bat\n";
						cin >> foodbat;
						auto bat = new Bat(foodbat, name, nickname, age, department, FoodPerDay);
						safari.addAnimal(bat);
					}
				}
				else cout<<"your choice must be from 1-3\n";//the coice is illegal
			}
			break;
		case 2:
			cout << "what the id you want to remove?\n";//remove animal from the zoo
			cin >> idr;
			safari.removeAnimal(idr);
			break;
		case 3:
			cout << "what the id you want to get?\n";//get data
			cin >> idr;
			safari.getAnimal(idr);
			break;
		case 4:
			safari.feedAllAnimals();
			break;
		case 5:
			safari.sleepAnimals();
			break;
		case 6:
			safari.PrintZoo();
			break;
		case 7:
			cout << "enter the num of the animal you want to see : 1==tiger,2==giraffe,3==bat\n";
			cin >> animalnum_7;
			safari.print_type(animalnum_7);
			break;
		case 8:
			cout << "goodbye\n";
			break;
		default:
			cout << "choice must be from 0 to 8\n\n";
		}

	} while (choice !=8);
	system("pause");
	return 0;
}