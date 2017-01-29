#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main (){

	for(int i=0; i < 10; i++)
		cout << i+1 << ", ";
	
	cout << endl;
	int randNum = (rand()% 100)+1;

	while(randNum != 100){
		cout << randNum << ", ";

		randNum = (rand()% 100)+1;
	}
	cout << randNum << endl;

	cout << "Guessing Game" << endl;

	int guessedNum;
	string guessedNumString;
	do{
		cout << "Guess number between 1 to 10 : ";
		getline(cin, guessedNumString);
		guessedNum=stoi(guessedNumString);
	} while(guessedNum!=4);

	cout << "You Win" << endl;

	return 0;
}