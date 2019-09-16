#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

class Planet
{
public:
    string name;
    int foodAmount;
    void setName(string planetName)
    {
        name = planetName;
    }
    void setFoodAmount()
    {
        foodAmount = rand() % 30000 + 15;
    }

private:
    string getName()
    {
        return name;
    }
    int getFoodAmount()
    {
        return foodAmount;
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

public:
    int age;
    void setAge(int age)
    {
        time_t years;
        years = time_t(age);
        time_t result = time(&years);
        time_t now = time(nullptr);
        time_t increasingAge = result + now;
    }

    vector<Organism> organisms;
    void createOrganism(Organism org)
    {
        organisms.push_back(org);
    }

    Planet()
    {
        cout << "Object of class Planet was created" << endl;
        this->name = name;
        setAge(age);
        setFoodAmount();
    }

    ~Planet()
    {
        cout << "Object of class Planet was destroyed" << endl;
    }
};

class Organism
{
public:
    Organism()
    {
        cout << "Object of class Organism was created" << endl;

        setLife(true);
    }
    bool alive;
    void setLife(bool live)
    {
        this->alive = live;
    }

    ~Organism()
    {
        cout << "Object of class Organism was destroyed" << endl;
    }
};

class Animal : public Organism
{
private:
    int age;
    int weigth;

public:
    int foodAmount;
    void setAge()
    {
        age = rand() % 80 + 1;
    }
    void setWeigth()
    {
        weigth = rand() % 150 + 1;
    }
    int getAge()
    {
        return age;
    }
    int getWeigth()
    {
        return weigth;
    }
    void consumeFood()
    {
        int leftFood = foodAmount - weigth * 10;
        if (leftFood < 15)
        {
            setLife(false);
        }
    }
    Animal()
    {
        cout << "Object of class Animal was created" << endl;
        setAge();
        setWeigth();
    }
    ~Animal()
    {
        cout << "Object of class Animal was destroyed" << endl;
    }
};

class Plant : public Organism
{
public:
    int productionCoef;
    int height;
    int food;
    void setProductionCoef(int coef)
    {
        this->productionCoef = coef;
    }
    void setHeight(int heig)
    {
        this->height = heig;
    }
    int getProductionCoef()
    {
        return productionCoef;
    }
    int getHeight()
    {
        return height;
    }
    double setFood(double foodMin, double foodMax)
    {
        double f = (double)rand() / RAND_MAX;
        return foodMin + f * (foodMax - foodMin);
    }
    bool produceFood()
    {
        for (int i = 0; i < 30000; i++)
        {
            int newFood = productionCoef * height;
            return 1;
        }
    }
    Plant()
    {
        cout << "Object of class Plant was created" << endl;
        setFood(0.1, 0.5);
    }
    ~Plant()
    {
        cout << "Object of class Plant was destroyed" << endl;
    }
};

int main()
{
    Planet Earth;
    Earth.setAge(1000);
    string name = "Earth";
    Earth.setName(name);
    Earth.setFoodAmount();
    Animal Bird, Cat, Dog, Cow, Mouse;
    Plant Tree, Flower, Grass;
    vector<Animal> animals;
    animals.push_back(Bird);
    animals.push_back(Cat);
    animals.push_back(Dog);
    animals.push_back(Cow);
    animals.push_back(Mouse);
    vector<Plant> plants;
    plants.push_back(Tree);
    plants.push_back(Flower);
    plants.push_back(Grass);
    vector<Animal>::iterator a;
    a = animals.begin();
    while (Earth.foodAmount > 15)
    {
        int age = 1;
        Earth.setAge(age++);
        Bird.consumeFood();
        Cat.consumeFood();
        Dog.consumeFood();
        Cow.consumeFood();
        Mouse.consumeFood();
        Tree.produceFood();
        Tree.height++;
        Flower.produceFood();
        Flower.height++;
        Grass.produceFood();
        Grass.height++;
    }
}