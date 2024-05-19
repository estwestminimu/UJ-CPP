

#ifndef CPP_EMPLOYEE_H
#define CPP_EMPLOYEE_H

#include "../worker.h"

class Employee : public Worker {
private:
    double payoutMultiplier = 1.0;

    //007
    friend class CEO;

    //007
    friend class Manager;

public:
    //Delegujemy konstruktor, aby nie powtarzac tych samych linijek kodu
    Employee(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge);

    //Nadpisujemy metode wirtualna
    int calcSalary() const override;
};



#endif //CPP_EMPLOYEE_H
