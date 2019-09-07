#include <iostream>
#include <string>
#include <ctime>
#include "../include/Planet.h"
using namespace std;

int main()
{
    time_t result = time(nullptr);
    cout << asctime(localtime(&result));
}