#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    Hero()
    {
        cout << "Constructor" << endl;
    }

    int getHealth()
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
    }

    // parameterised
    Hero(int health)
    {
        cout << "Constructor" << endl;
        this->health = health;
        cout << "this -> " << this << endl;
    }
};

int main()
{
    cout << "Hi" << endl;
    // creation of object
    Hero h1(8);
    cout << &h1 << endl;
    h1.getHealth();
    cout << "Bye" << endl;
}
