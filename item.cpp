#include<iostream>
using namespace std;

class item {
    public:
    string name;
    string description;
    int qty;

    // item(string nameIn, string desc, int qtyIn) {
    //     name = nameIn;
    //     description = desc;
    //     qty = qtyIn;
    // }

    void displayInfo() {
        cout << "\nName: " << name << "\n" << description;
    };

    void useItem() {
        
    };
};

class sword : public item {
    public:
    string name = "Sword";
    string description = "my sword";
    int qty = 1;
    void displayInfo() {
        cout << "\nName: " << name << "\n" << description;
    };
};


int main () {
    // item mySword("Sword", "My Sword", 1);
    // mySword.displayInfo();

    sword mySword2;
    mySword2.displayInfo();
}