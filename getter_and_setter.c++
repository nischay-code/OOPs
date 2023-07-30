#include <iostream>
#include "hero3.cpp"
using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    // creation of object
    Hero h1;
    // use setter
    h1.setHealth(5);
    // cout << "Size of h1 health : " << sizeof(h1.health) << endl;
    cout << h1.getHealth() << endl;
}
