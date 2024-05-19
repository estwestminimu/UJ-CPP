#ifndef CPP_TIMETABLE_H
#define CPP_TIMETABLE_H
#include "string"



class timeTable {
public:
    // Czyste funkcje wirtualne
    virtual void listWorkers() const = 0;
    virtual ~timeTable() {}  // Wirtualny destruktor
    virtual void Responsibilities() const = 0;
    virtual const std::string& getFirstWorker() const = 0;
    virtual const std::string& getLastWorker() const = 0;
    virtual void addWorker(const std::string& worker) = 0;
    virtual void removeWorker(const std::string& worker) = 0;
};

#endif //CPP_TIMETABLE_H
