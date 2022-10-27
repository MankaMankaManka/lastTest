#include <iostream>
#define Car_H
class Car
{
public:
int vinNumber;
int price;
int emissions=0;
int number;

void set_vinNumber(int number);
void set_price(int number);
void set_emissions(int number);
int get_vinNumber();
int get_price();
int get_emissions();

Car(int price);   // creates a Car with a price
Car();
void drive(int kms);
};
