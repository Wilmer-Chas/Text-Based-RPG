#if !defined(ITEM_H)
#define ITEM_H 

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

#endif // item