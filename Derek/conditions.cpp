#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main(){

	int greeting = 18;

	switch(greeting){
		case 1:
			cout << "Bonjour" << endl;
			break;

		case 2:
			cout << "Welcome" << endl;
			break;

		case 3:
			cout << "Hola" << endl;
			break;

		default:
			cout << "Hello" << endl;
	}

	int largeNum = (3>1)? 5:6;
	cout << "Large num : " << largeNum << endl;
	
}