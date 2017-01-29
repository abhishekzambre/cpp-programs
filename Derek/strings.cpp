#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main (){

	char left[6]={'H','a','p','p','y','\0'};
	string right=" Birthday";
	string test;
	string name = "Abhishek";
	string yourName = "Abhishek";

	cout << left + right << endl;

	cout << "right size : " << right.size() << endl;
	cout << "right empty : " << right.empty() << endl;
	cout << "test empty : " << test.empty() << endl;
	cout << name.append(" is my name") << endl;


	string dog="Dog";
	string cat="Cat";

	cout << dog.compare(cat) << endl;
	cout << dog.compare(dog) << endl;
	cout << cat.compare(dog) << endl;

	string newName=yourName.assign(yourName);

	cout << newName << endl;

	string nickName = yourName.assign(yourName,1,10);

	cout << nickName << endl;

	string fullName = "Abhishek Zambre";

	int indexLastName = fullName.find("Zambre",0);

	cout << "Index Last Name : " << indexLastName << endl;

	fullName.insert(8, " Kondibarao");

	cout << fullName << endl;

	fullName.erase(8, 11);

	cout << fullName << endl;

	fullName.replace(8, 8, " Kondiba");

	cout << fullName << endl;


	/*string yourName;

	cout << "Enter your name : ";
	getline(cin, yourName);

	cout << "Hello " << yourName << endl;*/

	return 0;
}