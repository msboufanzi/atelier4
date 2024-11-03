// exercice 2 animal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class animal
{
public:
	
	int set_value( string n , int a) {
		name = n;
		age = a;

	}
protected:
	string name; int age;

};

class zebra : public animal
{

protected:
	string lieuorigine;
public: 
	zebra (string lieu) {
	lieu = lieuorigine;
}
		void disp() {
		cout << "pour zebra :" << endl;
		cout << "Le nom de zebra est :" << name << endl;
		cout << "L'age de zebra est :" << age << endl;
		cout << "Le lieu d'origine de zebra est: " << lieuorigine << endl;
	}
	}



class dolphin : private animal
{

protected:
	string lieuorigine;
public:
	dolphin(string lieu ) {
		lieu = lieuorigine ;
	}
	void disp() {
		cout << "pour dolphin :" << endl;
		cout << "Le nom de dolphin est :" << name << endl;
		cout << "L'age de dolphin est :" << age << endl;
		cout << "Le lieu d'origine de dolphin est: " << lieuorigine << endl;


};



	int main()
	{
		zebra zebra("boukhalef");
		dolphin dolphin("ach9ar");
		cout << "Hello World!\n";
		zebra.set_value("ze", 2);
		zebra.disp();
		dolphin.set_value("do", 3);
		dolphin.disp();

	}