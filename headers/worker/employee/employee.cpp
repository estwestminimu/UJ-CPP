#include "../worker.h"
#include "math.h"
#include "../employee/employee.h"

    // 004
    //Delegujemy konstruktor, aby nie powtarzac tych samych linijek kodu
    Employee::Employee(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge) : Worker(tempName, tempSurname,
                                                                                                tempNDA, tempAge) {};

    //Nadpisujemy metode wirtualna
   int Employee::calcSalary() const {
        int temp = ceil(basicSalary * (HoursWorked / 400) * payoutMultiplier);
        return (HoursWorked < 40) ? temp - 1000 : temp;
    }
