#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

void makeMeYoung(int* age){
	cout << "I used to be " << *age << endl;

	*age=21;

}

void actYourAge(int& refAge){
	refAge++;
}

int main(){

	int myAge=30;
	char myGrade='A';

	cout << "Size of int : " << sizeof(myAge) << endl;
	cout << "Size of char : " << sizeof(myGrade) << endl;

	cout << "myAge location  : " << &myAge << endl;

	int* agePtr = &myAge;

	cout << "Address pointer : " << agePtr << endl;

	cout << "Data at memory  : " << *agePtr << endl;


	int numArr[5]={1,4,6,3,5};

	int* arrPtr = numArr;

	cout << "Address : " << arrPtr << " Value : " << *arrPtr << endl;

	arrPtr++;

	cout << "Address : " << arrPtr << " Value : " << *arrPtr << endl;

	cout << "Address : " << numArr << " Value : " << *numArr << endl;

	makeMeYoung(&myAge);

	cout << "I'm " << myAge << " now" << endl;

	int& ageRef = myAge;

	cout << "myAge " << myAge << endl;
	ageRef++;
	cout << "myAge " << myAge << endl;

	cout << "ageRef " << ageRef << endl;

	actYourAge(ageRef);

	cout << "myAge " << myAge << endl;

	return 0;
}