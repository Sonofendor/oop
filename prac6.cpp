#include <iostream>

using namespace std;

class Property {
	public:
	double worth;
	virtual ~Property() {};
	Property(double worth_1): worth(worth_1) {};
	virtual double tax() = 0;
};

class Appartment : public Property {
public:
	Appartment(double worth_2): Property(worth_2) {};
	double tax(){
		return worth*0.001;
	};
};

class Car : public Property {
	public:
	Car(double worth_2): Property(worth_2) {};
	double tax(){
		return worth*0.005;
	};
};

class CountryHouse : public Property {
	public:
	CountryHouse(double worth_2): Property(worth_2) {};
	double tax(){
		return worth*0.002;
	};
};

int main(){
	Property *sas[] = {new Appartment(1200000), new Appartment(300000), new Appartment(500000), new Car(450000), new Car(15000), new CountryHouse(5000000), new CountryHouse(350000)};
	for (int i = 0; i < 7; i++) cout<<"Tax for property number "<<i<<" :"<<sas[i]->tax()<<"\n";
	for (int i = 0; i < 7; i++) delete sas[i];
	return 0;
}