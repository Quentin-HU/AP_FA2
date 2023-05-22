#pragma once
#include <vector>
#include "employee.hpp"
#include "shelf.hpp"

class warehouse
{
public:
    std::vector <employee> Employees;
    std::vector <shelf> Shelves;
    void addEmployee(employee Employee);
    void addShelf(shelf Shelf);
    bool rearrangeShelves(shelf& shelf);
    bool pickItems(std::string itemName, int itemCount);
    warehouse();
};
