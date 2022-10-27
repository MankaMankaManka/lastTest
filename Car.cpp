#include <iostream>
#include <iostream>

class Car
{
private:
int vinNumber;
int price;
int emissions=0;

public:
set_vinNumber
set_price;
set_emissions=0;
get_vinNumber;
get_price;
get_emissions;

Car(int price);   // creates a Car with a price
Car();
void drive(int kms);
};

Car::Car(){
}

Car::Car(int price){
	set_emmisions=0;
	set_price=price
}

void Car::drive(int kms){
	set_emissions=kms;
}