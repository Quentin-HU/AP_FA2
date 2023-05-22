#include "include/employee.hpp"

employee::employee(std::string name, bool is_busy, bool forkliftCertificate)
{
    this->name = name;
    this->is_busy = is_busy;
    this->forkliftCertificate = forkliftCertificate;
}