#include "item.h"
using namespace std;

class sword : public item
{
public:
    sword()
        : item("Sword", "My sword", 1) {}
};
