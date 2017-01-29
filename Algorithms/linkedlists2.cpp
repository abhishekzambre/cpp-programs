#include <iostream>
#include <string>

using namespace std;

template <class T>
class ListElement {
public:
	ListElement(const T &value) : next (NULL), data(value){}
	~ListElement(){}

	ListElement *getNext() const { return next; }
	const T& value() const { return data; }
	void setNext(ListElement *elem) { next = elem; }
	void setValue(const T& value) { data = value; }

private:
	ListElement *next;
	T data;
};

int main(){
	ListElement <int> node1(10);
	cout << "node1 value is " << node1.value() << endl;

	ListElement <int> node2(15);
	cout << "node2 value is " << node2.value() << endl;

	node1.setNext(&node2);

	ListElement <int> node3(11);
	node2.setNext(&node3);

	cout << (*node1.getNext()).value() << endl;

	cout << node1.getNext()->getNext()->value() << endl;

	cout << (*(*node1.getNext()).getNext()).value() << endl;

	ListElement <int> node4(57);
	node3.setNext(&node4);

	ListElement <int> *temp = &node1;

	while (temp != NULL){
		cout << "Value : " << temp->value() << ",\tAddress : " << temp << ",\tNext : " << temp->getNext() << endl;
		temp = temp->getNext();
	}

}