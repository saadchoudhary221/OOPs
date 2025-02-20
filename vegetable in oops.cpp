#include <iostream>
using namespace std;
class vegetable
{
	public:
	string name;
	string color;
	string weight;
	void display()
	{
		cout<<"vegetable"<<"name:"<<name<<endl;
	cout<<"color:"<<color<<endl;
	cout<<"weight:"<<weight<<endl;
	}
};
int main (){
	vegetable potato;
	potato.name="potato";
	potato.color="brown";
	potato.weight="8kg";
	potato.display();
	return 0;
}
