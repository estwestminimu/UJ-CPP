#include <string>
#include <iostream>
#include <vector>
#include <algorithm> //Algorytmy STL
#include "headers/timetable/timetable.h"
#include "headers/timetable/friday/friday.h"
#include "headers/timetable/saturday/saturday.h"
#include "headers/worker/worker.h"
#include "headers/worker/employee/employee.h"
#include "headers/worker/manager/manager.h"
#include "headers/worker/ceo/ceo.h"
#include "headers/functions/functions.h"


int main() {
    Employee userTime("Lukasz", "Technik", true, 20);
    Manager overloading("Dominik", "Tomasz", true, 29);

    //WYJATKI 001
    //Ma mniej niz 18 lat
    std::cout << "\nWyjatki:\n\n";
    Employee under18("Jakub", "Litra", true, 12);

    //PRZECIAZENIE OPERATOROW 002
    std::cout << "\nPrzeciazenie:\n\n";

    std::cout << overloading;

    //FUNKCJA ZAPRZYJAZNIONA 007
    std::cout << "\nFunkcja zaprzyjazniona:\n\n";
    //Nie przepracowal zadnej godziny wiec nie dostaje nic na wyplate
    std::cout << overloading.calcSalary() << std::endl;
    //wyrobil norme
    setHours(overloading, 250);
    std::cout << overloading.calcSalary() << std::endl;

    //PRZYJAZN 007
    std::cout << "\nPrzyjazn\n\n";
    std::cout << userTime.calcSalary() << std::endl;
    overloading.friendlyHours(userTime, 500);
    std::cout << userTime.calcSalary() << std::endl;

    std::vector<std::string> workers = {"Michal", "Piotr", "Jakub"};

    timeTable *Piatek = new Friday(workers);
    timeTable *Sobota = new Saturday();

    //Polimorfizm 010
    std::cout << "\nPolimorfizm\n\n";
    Piatek->Responsibilities();
    Sobota->Responsibilities();

    //Konstruktor kopiujacy 006
    std::cout << "\nKonstruktor kopiujacy\n\n";
    timeTable *piatekKOPIA = new Friday(*dynamic_cast<Friday *>(Piatek));
    std::cout << "Kopia listy piatek: " << std::endl;
    piatekKOPIA->listWorkers();

    //uzyskujemy dostep przez wskaznik
    Piatek->addWorker("Pawel");
    Piatek->addWorker("Karol");
    Piatek->addWorker("Tomasz");
    Piatek->listWorkers();

    //algorytm 009
    //Pawel zostaje usuniety z listy, lista jest przesunieta
    Piatek->removeWorker("Pawel");
    std::cout << "lista Piatek: " << std::endl;
    Piatek->listWorkers();

    //iterator 009
    //Wyjatek 001
    //Pobieramy pierwszego i ostatniego pracownika w danym dniu

    piatekKOPIA->removeWorker("Michal");
    piatekKOPIA->removeWorker("Piotr");

    std::cout << "Pierwszy pracownik w Piatek: " << piatekKOPIA->getFirstWorker() << std::endl;
    piatekKOPIA->removeWorker("Jakub");
    std::cout << "Ostatni pracownik w Piatek: " << piatekKOPIA->getLastWorker() << std::endl;

    std::cout << "Kopia lista Piatek: " << std::endl;
    piatekKOPIA->listWorkers();
    return 0;
}