#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main(){

	string quote="This is fucking amazing";

	ofstream writer("myquotes.txt");

	if(!writer){
		cout << "Error opening file" << endl;
		return -1;
	}else{
		writer << quote << endl;
		writer.close();
	}

	ofstream writer2("myquotes.txt", ios::app);

	if(!writer2){
		cout << "Error opening file" << endl;
		return -1;
	}else{
		writer2 << "- Abhishek" << endl;
		writer2.close();
	}

	char letter;

	ifstream reader("myquotes.txt");

	if(!reader){
		cout << "Error opening file" << endl;
		return -1;
	}else{
		for(int i=0; ! reader.eof(); i++){
			reader.get(letter);
			cout << letter;
		}

		cout << endl;
		reader.close();
	}



	return 0;
}