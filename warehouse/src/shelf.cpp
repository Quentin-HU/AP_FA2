#include "include/shelf.hpp"

shelf::shelf()
{
}

bool shelf::swapPallet(int slot1, int slot2)
{
    int temp = Pallet[slot1];
    Pallet[slot1] = Pallet[slot2];
    Pallet[slot2] = temp;
    return true;
}