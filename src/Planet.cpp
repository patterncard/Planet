#include <iostream>
#include <string>
#include "../include/Planet.h"
using namespace std;

class Planet
{
private:
    string name;
    int age;
    int foodAmount;
    Planet(string name, int age)
    {
        this->age = age;
        this->name = name;
        this->foodAmount = rand() % 30000 + 15;
    }
};