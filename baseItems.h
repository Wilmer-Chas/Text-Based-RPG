#include "item.h"
using namespace std;

class sword : public item
{
public:
    sword()
        : item("Sword", "My sword", 1) {}

    int useItem(int attr) {
        return attr + 4;

    };
};