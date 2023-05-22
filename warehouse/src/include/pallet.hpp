#pragma once
#include <string>

class pallet
{
private:
    int itemCount;
    std::string itemName;
    int itemCapacity;
public:
    std::string getItemName() {return itemName;};
    int getItemCount() {return itemCount;};
    int getremainingspace() {return itemCapacity - itemCount;};
    bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
    bool takeOne();
    bool removeOne();
    pallet(int itemCount, std::string itemName, int itemCapacity);
    pallet();
};

pallet::pallet(/* args */)
{
}

