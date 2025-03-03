#include "PrototypeExampleSecond.h"

PrototypeExampleSecond* PrototypeExampleSecond::clone()
{
    PrototypeExampleSecond* temp = new PrototypeExampleSecond(*this);
    return temp;
}
