#include "item.h"
using namespace std;

class sword : public item
{
private:
    int damage = 4;
public:
    sword()
        : item("Sword", "My sword", 1) {}

    int useItem (int attr) {
        //logik for damage and check whether the item can be used
        if(attr > 1) {
            return attr+damage;
        } else {
            return -1;
        }

    }

};