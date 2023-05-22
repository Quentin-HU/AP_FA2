#pragma once
#include <array>

class shelf
{
public:
    std::array <int, 4> Pallet;
    shelf();
    bool swapPallet(int slot1, int slot2);
};
