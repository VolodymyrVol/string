#include <iostream>
#include <string>
using namespace std;

class Car
{
	string country;
	string model; 
	string color;
	double price;
	int age;
public:
	Car()
	{
		price = age = 0;
	}
	Car(const char* c, const char* m, const char* col, double p, int a)
	{
		country.append(c);
		model.append(m);
		color.append(col);
		price = p;
		age = a;
	}
	Car(Car& obj)
	{
		country = obj.GetCount();
		model = obj.GetMod();
		color = obj.GetCol();
		price = obj.GetPrice();
		age = obj.GetAge();
	}
	string GetCol()
	{
		return color;
	}
	string GetMod()
	{
		return model;
	}
	string GetCount()
	{
		return country;
	}
	double GetPrice()
	{
		return price;
	}
	int GetAge()
	{
		return age;
	}
	void SetCol(string c)
	{
		color = c;
	}
	void SetMod(string m)
	{
		model = m;
	}
	void SetCount(string c)
	{
		country = c;
	}
	void SetPrice(double p)
	{
		price = p;
	}
	void SetAge(int a)
	{
		age = a;
	}
	void Input(const char* c, const char* m, const char* col, double p, int a)
	{
		country = c;
		model = m;
		color = col;
		price = p;
		age = a;
	}
	void Output()
	{
		cout << "Country: " << GetCount() << endl
			<< "Model: " << GetMod() << endl
			<< "Color: " << GetCol() << endl
			<< "Price: " << GetPrice() << endl
			<< "Age: " << GetAge() << endl;
	}
};

int main()
{


}