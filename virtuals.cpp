#include <iostream>

using namespace std;

class Animal{
public:
	void getFamily(){ cout << "We are animals." << endl; }

	virtual void getClass() { cout << "I am an animal." << endl; }

	virtual void makeSound () { cout << "The animal says grrr." << endl ;}
};

class Dog : public Animal{
public:
	void getClass(){ cout << "I am a Dog." << endl; }
	void makeSound () { cout << "The dog says woof." << endl ;}
};

class Cat : public Animal{
public:
	void makeSound () { cout << "The cat says meow." << endl ;}
};

class Car{
public:
	virtual int getNumWheels() = 0;
	virtual int getNumDoors() = 0;
};

class StationWagon : public Car{
public:
	int getNumWheels() { cout << "Station Wagon has 4 wheels." << endl; }
	int getNumDoors() { cout << "Station Wagon has 4 doors." << endl; }
	StationWagon(){}
	~StationWagon();
};

class German : public Dog{
public:
	void getClass() { cout << "I am a German Shepard." << endl; }
	void getDerived() { cout << "I am an Animal and Dog." << endl; }
};

void WhatClass(Animal *animal){
	animal->getClass();
}


int main(){

	Animal *animal = new Animal;
	Dog *dog = new Dog;

	animal->getClass();
	dog->getClass();

	WhatClass(animal);
	WhatClass(dog);

	Dog spot;
	German max;

	Animal* ptrDog = &spot;
	Animal* ptrGerman = &max;

	ptrDog -> getFamily();
	ptrDog -> getClass();

	ptrGerman -> getFamily();
	ptrGerman -> getClass();

	Animal* pCat = new Cat;
	Animal* pDog = new Dog;

	pCat->makeSound();
	pDog->makeSound();

	Car* stationwagon = new StationWagon();

	stationwagon->getNumWheels();

	return 0;
}