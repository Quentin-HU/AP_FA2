#include "include/pallet.hpp"

pallet::pallet(int itemCount, std::string itemName, int itemCapacity)
{
    this->itemCount = itemCount;
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
}