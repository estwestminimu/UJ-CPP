#ifndef CPP_FRIDAY_H
#define CPP_FRIDAY_H

#include "../timetable.h"
#include <vector>
#include <string>

class Friday : public timeTable {
private:

    //011
    //Pojemnik na dane ustalonego typu który zarzadza pamiecia - dynamiczna tablica
    std::vector<std::string> workers;
public:
    //004
    //konstrutor z lista pracownikow
    Friday( std::vector<std::string> &workers);

    //const - nie modyfikuje obiektu w ktorym jest wywolana inaczej blad

    //006
    // Konstruktor kopiujący
    Friday( Friday &other);

    void listWorkers() const override;

    //POLIMORFIZM
    void Responsibilities() const override;

    //Iterator
    const std::string &getFirstWorker() const override;

    //Iterator
    const std::string &getLastWorker() const override;

    void addWorker(const std::string &worker) override;

    //Algorytm wyszukuje i usuwa uzytkownika oraz przesuwa tabele w puste miejsce
    void removeWorker(const std::string &worker) override;
};


#endif //CPP_FRIDAY_H
