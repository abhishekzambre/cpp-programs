#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int addNumbers(int first, int second=0){

	int combined=first+second;

	return combined;
}

int addNumbers(int first, int second, int third){

	return first+second+third;

}

int getFactorial(int n){
	int sum;

	if(n == 1) sum = 1;
	else sum = getFactorial(n-1)*n;
	return sum;
}

int main(){

	cout << addNumbers(1) << endl;

	cout << addNumbers(1,5,6) << endl;

	cout << getFactorial(4) << endl;

	return 0;
}