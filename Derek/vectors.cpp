#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main(){

	vector <int> lotteryNumVec(0);

	int lotteryNumArr[5] = {5,19,4,38,29};

	lotteryNumVec.insert(lotteryNumVec.begin(), lotteryNumArr, lotteryNumArr+3);

	cout<< lotteryNumVec.at(0) << endl;	

	lotteryNumVec.insert(lotteryNumVec.begin()+5, 44);

	cout << lotteryNumVec.at(5) << endl;

	lotteryNumVec.push_back(66);

	cout << lotteryNumVec.back() << endl;

	lotteryNumVec.pop_back();

	cout << lotteryNumVec.back() << endl;

	cout << lotteryNumVec.size() << endl;

	cout << lotteryNumVec.front() << endl;

	cout << lotteryNumVec.empty() << endl;

	return 0;
}