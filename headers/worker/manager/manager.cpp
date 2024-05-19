#include "../worker.h"
#include <cmath>
#include "../employee/employee.h"
#include "manager.h"

// 004
//Delegujemy konstruktor, aby nie powtarzac tych samych linijek kodu
Manager::Manager(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge) : Worker(tempName,
                                                                                                    tempSurname,
                                                                                                    tempNDA,
                                                                                                    tempAge) {};

//Nadpisujemy metode wirtualna
int Manager::calcSalary() const {
    int temp = floor(basicSalary * (HoursWorked / 200) * payoutMultiplier);
    return (HoursWorked > 90) ? floor(temp * 1.5) : temp;
}

//007
//Uzyskuje dostep do prywatnych pol klasy Employee
void Manager::friendlyHours(Employee &employee, int hours) {
    employee.HoursWorked += hours;
}


