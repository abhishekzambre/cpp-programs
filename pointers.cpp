#include <iostream>

using namespace std;

void makeMeYoung(int* age){
	cout << "I used to be " << *age << endl;

	*age=21;
}

void actYourAge(int& age){
	age = 39;
}

int main(){

	int myAge=30;
	int x=10;

	int* myPtr = &myAge;

	cout << "Address of myAge " << &myAge << endl;

	cout << "Address in pointer " << myPtr << endl;

	cout << "Data at pointer's location " << *myPtr << endl;

	cout << "Address of pointer " << &myPtr << endl;


	int badNum[5] = {1,3,5,7,11};

	int *numArrayPtr = badNum;

	cout << "Address " << numArrayPtr << " , Value " << *numArrayPtr << endl;

	numArrayPtr++;

	cout << "Address " << numArrayPtr << " , Value " << *numArrayPtr << endl;	

	cout << "Address " << badNum << " , Value " << *badNum << endl;

	makeMeYoung(&myAge);

	cout << "I am now " << myAge << endl;

	int& myRef = myAge;

	myRef++;

	cout << "Age is now " << myRef << endl;

	actYourAge(myRef);

	cout << "Age is now " << myAge << endl;

	myRef=x;

	cout << "New " << myRef << endl;

	return 0;
}