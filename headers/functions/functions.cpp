#include "functions.h"


//002
//przeciazenei operatora poza klasa
//typ zwracanej funkcji -----Referencja na strumien wejsciowy
std::ostream &operator << (std::ostream &wyjscie,  Worker &s) {
    return wyjscie << s.getName() << " " << s.getUsername() << " NDA: " << (s.getNDA() ? "Podpisane" : "Niepodpisane" )<< " Lat: " << s.getAge() << std::endl;
}


//Uzyksuje dostep do prywatnych wartosci klasy Worker
//funkcja zaprzyjaźniona
//007
void setHours(Worker &worker, int hours) {
    worker.HoursWorked += hours;
}


