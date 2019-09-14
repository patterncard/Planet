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
    void setAge(int age)
    {
        time_t years;
        years = time_t(age);
        time_t result = time(&years);
        time_t now = time(nullptr);
        time_t increasingAge = result + now;
        cout << increasingAge << endl;
        cout << asctime(localtime(&increasingAge));
    }
    void addFood(int moreFood)
    {
        if (foodAmount > 15)
        {
            int increasingFood = foodAmount + moreFood;
        }
        else
        {
            cout << "Too few food on the planet" << endl;
        }
    }
    void substractFood(int lessFood)
    {
        if (foodAmount < 30000)
        {
            int decreasingFood = foodAmount - lessFood;
        }
        else
        {
            cout << "Too much food on the planet" << endl;
        }
    }

        Planet(int name, int age)
    {
        this->age = age;
        this->name = name;
        this->foodAmount = rand() % 30000 + 15;
        void setAge(int age);
    }

    ~Planet()
    {
        std::cout << "Object of class Planet was destroyed" << std::endl;
    }
};