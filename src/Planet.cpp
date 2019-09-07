#include <iostream>
#include <string>
#include <ctime>
#include "../include/Planet.h"
using namespace std;

class Planet
{
private:
    string name;
    int age;
    int foodAmount;
public:
    void setAge()
    {
        time_t result = time(nullptr);
        cout << asctime(localtime(&result));
    }
    Planet(string name, int age)
    {
        this->age = age;
        this->name = name;
        this->foodAmount = rand() % 30000 + 15;
    }
};