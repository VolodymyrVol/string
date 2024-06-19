#include <iostream>
#include <string>
using namespace std;

class Human
{
	string name;
	string surname; 
	int age;
public:
	Human()
	{
		age = 0;
	}
	Human(const char* n, const char* s, int a)
	{
		name.append(n);
		surname.append(s);
		age = a;
	}
	void Output()
	{
		cout << name << endl << surname << endl << age << endl;
	}
};



int main()
{


}