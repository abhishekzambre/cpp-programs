#include <iostream>

using namespace std;

int getFactorial(int number)
{
	int sum;
	if(number == 1)
	{
		cout << number << " : ";
		sum = 1;
	}
	else
	{
		cout << number << "x";
		sum = getFactorial(number-1) * number;
	}
	return sum;
}

int sum(int a, int b){
	return a+b;
}
int sum(int a, int b, int c){
	return a+b+c;
}

int main()
{

	int num=5;
	cout << "Factorial of " << num << " is " << getFactorial(num) << endl;

	cout << "Addition of 1 & 2 is : " << sum(1,2) << endl;

	cout << "Addition of 3, 4 & 5 is : " << sum(3,4,5) << endl;

	return 0;

}