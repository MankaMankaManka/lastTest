#include <iostream>
#include "Car.h"

Car::Car(){
}

void Car::set_vinNumber(int number){
	vinNumber=number;
}
void Car::set_price(int number){
price=number;
}
void Car::set_emissions(int number){
	emissions=number;
}

int Car::get_vinNumber(){
return vinNumber;
}
int Car::get_price(){
	return price;
}
int Car::get_emissions(){
	return emissions;
}


Car::Car(int price){
	
	Car.set_price(price);
	Car.set_emissions(0);
}

void Car::drive(int kms){
	Car.set_emissions(kms);
}