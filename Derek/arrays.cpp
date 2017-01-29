#include<iostream>
#include<string>

using namespace std;

int main (){

	int goodNum[5];

	int badNum[5]={2,5,8,12,5};

	cout << "Bad number 1 : " << badNum[0] << endl;

	char myName[2][8]={{'A','b','h','i','s','h','e','k'},
						{'Z','a','m','b','r','e'}};


	cout << "myName, 2 , 4 : " << myName[1][3] << endl;

	return 0;
}