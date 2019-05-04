#include <iostream>
#include <string.h>

class Planet
{
private:
	char name[20];
	int age;

public:
	int foodAmount;

	Planet(char name[20], int age)
	{
		this->age = age;
		strcpy(this->name, name);
		this->foodAmount = rand() % 300 + 15;
	}
};

int main()
{
	//std::cout << foodAmountt << std::endl;
	return 0;
}