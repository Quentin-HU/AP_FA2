#include "include/employee.hpp"

employee::employee(std::string name, bool is_busy, bool forkliftCertificate)
{
    this->name = name;
    this->is_busy = is_busy;
    this->forkliftCertificate = forkliftCertificate;
}

void employee::setName(std::string name)
{
    this->name = name;
}

void employee::setIsBusy(bool is_busy)
{
    this->is_busy = is_busy;
}

void employee::setForkliftCertificate(bool forkliftCertificate)
{
    this->forkliftCertificate = forkliftCertificate;
}

bool employee::getIsBusy()
{
    return is_busy;
}

bool employee::getForkliftCertificate()
{
    return forkliftCertificate;
} 

std::string employee::getName()
{
    return name;
}
