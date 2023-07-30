#include <iostream>
#include "hero3.cpp"
using namespace std;

class Hero
{
    // properties
    int health;
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
    Hero3 h3;
    cout << "Size of h1 : " << sizeof(h1) << endl;
    cout << "Size of h2 : " << sizeof(h2) << endl;
    cout << "Size of h3 : " << sizeof(h3) << endl;
}
