#include <iostream>

using namespace std;

int main(){

	int number=0;

	try{
		if (number != 0)
			cout << 2/number << endl;
		else
			throw(number);
	}
	catch(int number){
		cout << "Number is not valid" << endl;
	}
}