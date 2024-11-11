#include <iostream>
using namespace std;

class item
{
public:
    string name;
    string description;
    int qty;

    item(string name, string desc, int qty)
        : name(name), description(desc), qty(qty) {};

    void displayInfo()
    {
        cout << "\nName: " << name << "\n"
             << description;
    };

    void useItem() {

    };
};

class sword : public item
{
public:
    sword()
        : item("Sword", "My sword", 1) {}
};




int main()
{
    // item mySword("Sword", "My Sword", 1);
    // mySword.displayInfo();

    sword mySword2;
    mySword2.displayInfo();
}