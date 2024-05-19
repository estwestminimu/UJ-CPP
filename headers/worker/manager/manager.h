#ifndef CPP_MANAGER_H
#define CPP_MANAGER_H

#include "../worker.h"

class Manager : public Worker {
    double payoutMultiplier = 1.3;
    //Deklaracja zapryjaznionej funkcji

public:
    //Delegujemy konstruktor, aby nie powtarzac tych samych linijek kodu
    Manager(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge);

    //Nadpisujemy metode wirtualna
    int calcSalary() const override;

    void friendlyHours(Employee &employee, int hours);

};


#endif //CPP_MANAGER_H
