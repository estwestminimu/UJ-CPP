#ifndef CPP_FUNCTIONS_H
#define CPP_FUNCTIONS_H
#include "../worker/worker.h"
#include <ostream>

//002
//przeciazenei operatora poza klasa
std::ostream &operator << (std::ostream &wyjscie,  Worker &s);

//funkcja zaprzyjaźniona
void setHours(Worker &worker, int hours);




#endif //CPP_FUNCTIONS_H
