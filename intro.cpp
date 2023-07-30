#include <iostream>
#include "hero3.cpp"
using namespace std;

class Hero
{
    // properties

public:
    int health;
    char level;

    void print()
    {
        cout << level << endl;
    }
};
class Hero2
{
    // properties
};

int main()
{
    // creation of object
    Hero h1;
    Hero2 h2;
    //static allocation 
    Hero3 h3;
    //dynamically
    Hero *h4 = new Hero;
    cout << "Size of h1 health : " << sizeof(h1.health) << endl;
    cout << "Size of h1 level : " << sizeof(h1.level) << endl;
    cout << "Size of h2 : " << sizeof(h2) << endl;
    cout << "Size of h3 : " << sizeof(h3) << endl;
    cout << "Size of h4 : " << sizeof(*h4) << endl;
}
