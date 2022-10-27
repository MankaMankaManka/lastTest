#include <iostream>
#include <iostream>
#define <Car.h>
class Car
{
public:
int vinNumber;
int price;
int emissions;
Car(int zprice);   // creates a Car with a price
Car();
void drive(int kms);
};

Car::Car(){
}

Car::Car(int price){
	emissions=0;
}

void Car::drive(int kms){
	emissions=kms;
}