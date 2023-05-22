#pragma once
#include <string>

class employee
{
private:
    std::string name;
    bool is_busy;
    bool forkliftCertificate;
public:
    std::string getName() {return name;};
    bool getIsBusy() {return is_busy;};
    bool getForkliftCertificate() {return forkliftCertificate;};
    void setName(std::string name) {this->name = name;};
    void setIsBusy(bool is_busy) {this->is_busy = is_busy;};
    void setForkliftCertificate(bool forkliftCertificate) {this->forkliftCertificate = forkliftCertificate;};
    employee(std::string name, bool is_busy, bool forkliftCertificate);
};

