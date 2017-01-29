#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Animal{
	public:
		virtual void makeSound(){ cout << "Animal says grr" << endl; }
};


class Dog: public Animal{
	public:
		void makeSound(){ cout << "Dog says woof" << endl; }
};


class Cat: public Animal{
	public:
		void makeSound(){ cout << "Cat says meow" << endl; }
};



class Car{
	public:
		virtual int getWheels() = 0;
		virtual int getDoors() = 0;
};

class StationWagon : public Car{
	public:
		int getWheels() { cout << "StationWagon has 4 wheels" << endl; }
		int getDoors() { cout << "StationWagon has 4 doors" << endl; }
		StationWagon(){}
		~StationWagon(){}
};

int main(){

	Animal* pCat = new Cat;
	Animal* pDog = new Dog;

	pCat->makeSound();
	pDog->makeSound();

	Car* stationWagon = new StationWagon();

	stationWagon->getWheels();
	stationWagon->getDoors();

	return 0;
}