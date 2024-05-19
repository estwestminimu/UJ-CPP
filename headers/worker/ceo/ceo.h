#ifndef CPP_CEO_H
#define CPP_CEO_H
#include "../worker.h"


class CEO : public Worker {
    double payoutMultiplier = 2.0;

public:
    //Delegujemy konstruktor, aby nie powtarzac tych samych linijek kodu
    CEO(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge);

    //007
    //Uzyskuje dostep do prywatnych pol klasy Employee
    //Funkcja umozliwiajaca zmiane ilosci przepracowanych godzin
    void friendlyHours(Employee &employee, int hours);

    //Nadpisujemy metode wirtualna
    int calcSalary() const override;
};
#endif //CPP_CEO_H
