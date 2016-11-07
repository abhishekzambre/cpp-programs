#include <iostream>
#include <string>

using namespace std;


struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

void printBook( struct Books book );

int main(){

	struct Books book1;
	strcpy( book1.title, "Learn C++ Programming");
	strcpy( book1.author, "Chand Miyan"); 
	strcpy( book1.subject, "C++ Programming");
	book1.book_id = 6495407;

	printBook( book1 );

	struct Books* book;

	book=&book1;

	cout << "Address of book1 : " << book << endl;
	cout << "Pointer access : " << book->title<<endl;

	return 0;
}

void printBook( struct Books book ) {
   cout << "Book title : " << book.title <<endl;
   cout << "Book author : " << book.author <<endl;
   cout << "Book subject : " << book.subject <<endl;
   cout << "Book id : " << book.book_id <<endl;
}