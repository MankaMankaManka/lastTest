#include <iostream>
#define Car_H

Car::Car(){
}

Car::Car(int price){
	set_emissions=0;
	set_price=price;
}

void Car::drive(int kms){
	set_emissions=kms;
}