#include "math.h"
#include "../employee/employee.h"
#include "ceo.h"



    // 004
    //Delegujemy konstruktor, aby nie powtarzac tych samych linijek kodu
    CEO::CEO(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge) : Worker(tempName, tempSurname,
                                                                                           tempNDA, tempAge) {};

    //Funkcja umozliwiajaca zmiane ilosci przepracowanych godzin
    void CEO::friendlyHours(Employee &employee, int hours) {
        employee.HoursWorked += hours;
    }

    //Nadpisujemy metode wirtualna
    int CEO::calcSalary() const  {
        int temp = ceil(basicSalary * (HoursWorked / 100) * payoutMultiplier);
        return (HoursWorked > 40) ? temp + 2000 : temp;
    }
