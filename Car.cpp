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