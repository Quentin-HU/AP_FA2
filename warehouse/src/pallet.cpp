#include "include/pallet.hpp"

pallet::pallet(int itemCount, std::string itemName, int itemCapacity)
{
    this->itemCount = itemCount;
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
}

pallet::pallet()
{
}

bool pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity)
{
    this->itemCount = 0;
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
    return true;
}

bool pallet::takeOne()
{
    if (itemCount > 0)
    {
        itemCount--;
        return true;
    }
    else
    {
        return false;
    }
}

bool pallet::putOne()
{
    if (itemCount < itemCapacity)
    {
        itemCount++;
        return true;
    }
    else
    {
        return false;
    }
}

int pallet::getRemainingSpace()
{
    return itemCapacity - itemCount;
}

std::string pallet::getItemName()
{
    return itemName;
}

int pallet::getItemCount()
{
    return itemCount;
}  
