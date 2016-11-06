#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

	string quote = "Oh this is a Good Life!!!";

	ofstream writer("myquotes.txt");

	if (! writer){
		cout << "An error occured." << endl;
		return -1;
	} else{
		writer << quote << endl;
		writer.close();
	}

	ofstream writer2("myquotes.txt", ios::app);

	if (! writer2){
		cout << "An error occured." << endl;
		return -1;
	} else{
		writer2 << "\n - One Republic" << endl;
		writer2.close();
	}

	char letter;

	ifstream reader("myquotes.txt");

	if(! reader){
		cout << "An error occured." << endl;
		return -1;
	} else{
		for (int i=0; ! reader.eof(); i++ ){
			reader.get(letter);
			cout<<letter;
		}
		cout <<endl;

		reader.close();
	}
}