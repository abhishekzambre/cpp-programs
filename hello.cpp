#include <iostream>
using namespace std;
int main(){
  typedef int feet;
  feet a=1;
  cout << "Hello world! " << sizeof(char) << sizeof(int);

  int b=2;

  enum color { red, green, blue=9 } c;
  c=blue;

  cout<<"\n" << c;
  return 0;
}
