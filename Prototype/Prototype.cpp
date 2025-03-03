#include "Prototype.h"

Prototype* Prototype::clone()
{
    Prototype* temp = new Prototype(*this);
    return temp;
}
