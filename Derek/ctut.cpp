#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main(){
	cout << "Hello World" << endl;

	const double PI = 3.1415926535;

	char myGrade = 'A';
	bool isHappy = false;
	int myAge = 30;
	float favNum = 3.141592;
	double otherFavNum = 1.934872704;
	
	int largestInt = 2147483647;

	unsigned int unsignedInt = 4294967295;

	cout << "Favourite Number : " << favNum << endl;

	cout << "Size of int : " << sizeof(myAge) << endl;
	cout << "Size of char : " << sizeof(myGrade) << endl;
	cout << "Size of bool : " << sizeof(isHappy) << endl;
	cout << "Size of float : " << sizeof(favNum) << endl;
	cout << "Size of double : " << sizeof(otherFavNum) << endl;

	cout << "Largest int : " << largestInt << endl;
	cout << "Unsigned int : " << unsignedInt << endl;

	cout << "4/5 :" << 4/5 << endl;
	cout << "4/5 :" << (float)4/5 << endl;

	return 0;
}