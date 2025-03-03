#include "PrototypeExampleFirst.h"

PrototypeExampleFirst* PrototypeExampleFirst::clone()
{
    PrototypeExampleFirst* temp = new PrototypeExampleFirst(*this);
    return temp;
}
