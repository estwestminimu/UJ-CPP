#include "../timetable.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include "friday.h"

    //004
    //konstrutor z lista pracownikow
    //Pole workers jest inicjalizowane lista pracownikow - zanim obiekt zacznie istnieec
    Friday::Friday( std::vector<std::string>& workers) : workers(workers) {}
//                                                         lista inijalizacyjna
    //006
    // Konstruktor kopiujący
    Friday::Friday( Friday& other) : workers(other.workers) {}

    //003
    void Friday::listWorkers() const  {
        std::cout << "Pracownicy w Piatek: ";
        for ( auto& worker : workers) {
            std::cout << worker << " ";
        }
        std::cout << std::endl;
    }



    //POLIMORFIZM
    void Friday::Responsibilities() const  {
        std::cout << "W Piatek pracownicy maja skladac meble" << std::endl;
    }

    //008
    //001
    //Iterator
    //wyjatek
    const std::string& Friday::getFirstWorker() const {
        if (workers.empty()) {
            static const std::string errorMsg = "Brak";
            return errorMsg;
        }
        return workers.front();
    }


    //008
    //001
    //Iterator
    //wyjatek
    const std::string& Friday::getLastWorker() const {
        if (workers.empty()) {
            static const std::string errorMsg = "Brak";
            return errorMsg;
        }
        return workers.back();
    }

    void Friday::addWorker(const std::string& worker)  {
        workers.push_back(worker);
    }

    //009
    //Algorytm wyszukuje i usuwa uzytkownika oraz przesuwa tabele w puste miejsce
    void Friday::removeWorker(const std::string& worker)  {
        workers.erase(find(workers.begin(),workers.end(),worker));
        std::cout<<"Usunieto pracownika: "<<worker<<std::endl;
    }

