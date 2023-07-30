#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    static int timeToComplete;
    Hero()
    {
        cout << "Default Constructor Called" << endl;
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
    ~Hero()
    {
        cout << "Destructor Called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    // creation of object
    cout << Hero::timeToComplete << endl;
    Hero h1(8);
    cout << &h1 << endl;
    h1.getHealth();
    cout << "Bye" << endl;

    Hero h2(4);
    // copy constructor
    Hero h3(h2);
    // h2.health=h3.health
    Hero *h4 = new Hero;
    // Manually Destructor Called
    delete h4;
}
