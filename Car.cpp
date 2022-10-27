#include <iostream>

class Car
{
private:
int vinNumber;
int price;
int emissions=0;

public:
int set_vinNumber;
int set_price;
int set_emissions=0;
int get_vinNumber;
int get_price;
int get_emissions;

Car(int price);   // creates a Car with a price
Car();
void drive(int kms);
};

Car::Car(){
}

Car::Car(int price){
	set_emmisions=0;
	set_price=price;
}

void Car::drive(int kms){
	set_emissions=kms;
}