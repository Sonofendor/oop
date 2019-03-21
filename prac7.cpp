#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	string type_name;
	string name;
	virtual void set_name (string) = 0;
	void show() {
		cout<<"Name - "<<name<<" Type - "<<type_name<<"\n";
	}
};

class Cat : public Animal {
public:
	void set_name (string name_1){
		name = name_1;
		type_name = "Cat";
	}
};

class Dog : public Animal {
public:
	void set_name (string name_1){
		name = name_1;
		type_name = "Dog";
	}
};

class Parrot : public Animal {
public:
	void set_name (string name_1){
		name = name_1;
		type_name = "Parrot";
	}
};

int main()
{
	Cat Barsik;
	Dog Sharik;
	Parrot Kesha;
	Barsik.set_name("Barsik");
	Barsik.show();
	Sharik.set_name("Sharik");
	Sharik.show();
	Kesha.set_name("Kesha");
	Kesha.show();	
	return 0;
}