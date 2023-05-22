#include "include/warehouse.hpp"

warehouse::warehouse()
{
}

void warehouse::addEmployee(employee Employee)
{
    Employees.push_back(Employee);
}

void warehouse::addShelf(shelf Shelf)
{
    Shelves.push_back(Shelf);
}

bool warehouse::rearrangeShelves(shelf& shelf)
{
    return true;
}

bool warehouse::pickItems(std::string itemName, int itemCount)
{
    return true;
}
