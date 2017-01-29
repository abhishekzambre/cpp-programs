#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main(){

	int num=0;

	try{
		if(num!=0){
			cout << 2/num << endl;
		} else throw(num);
	} catch(int num){
		cout << "Number is not valid" << endl;
	}

	return 0;
}