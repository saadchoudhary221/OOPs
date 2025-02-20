#include <iostream>
using namespace std;
 class fruit
 {
 	public:
 		string name;
 		 void display()
 		 {
 		 	cout<<"fruit"<<name<<endl;
		  }
 };
 int main()
 {
 	fruit apple;
 	apple.name="apple";
 	apple.display();   
 	return 0;
 }
