#include "../timetable.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include "saturday.h"



    //003
    void Saturday::listWorkers() const  {
        std::cout << "Pracownicy w Sobote: ";
        for ( auto& worker : workers) {
            std::cout << worker << " ";
        }
        std::cout << std::endl;
    }



    //010
    //POLIMORFIZM
    void Saturday::Responsibilities() const  {
        std::cout << "W Sobote pracownicy maja wysylac paczki" << std::endl;
    }

    //008
    //Iterator
    const std::string& Saturday::getFirstWorker() const  {
        return workers.front();
    }

    //008
    //Iterator
    const std::string& Saturday::getLastWorker() const {
        return workers.back();
    }

    void Saturday::addWorker(const std::string& worker)  {
        workers.push_back(worker);
    }

    void Saturday::removeWorker(const std::string& worker)  {
        workers.erase(find(workers.begin(),workers.end(),worker));
    }

