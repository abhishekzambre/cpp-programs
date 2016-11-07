#include <iostream>
#include <string>

using namespace std;


class IntElement{

public:
	IntElement(int value): next (NULL), data(value){}
	~IntElement(){}

	IntElement *getNext() const { return next; }
	int value() const { return data; }
	void setNext (IntElement *elem) { next = elem; }
	void setValue (int value) { data = value; }

private:
	IntElement *next;
	int data;
};




int main(){

	cout << "Linked List Implementation" << endl;

	IntElement node1(10);

	cout << "Node 1's value is " << node1.value() << endl;
	cout << "Node 1's next is " << node1.getNext() << endl;

	IntElement node2(20);

	cout << "Node 2's value is " << node2.value() << endl;

	node1.setNext(&node2);

	cout << "Node 1's next is " << node1.getNext() << endl;

	return 0;
}