#include <iostream>

Car::Car(){
}

Car::Car(int price){
	emissions=0;
}

void Car::drive(int kms){
	emissions=kms;
}