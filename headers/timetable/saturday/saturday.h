#ifndef CPP_SATURDAY_H
#define CPP_SATURDAY_H
#include "../timetable.h"
#include <vector>

//Pracownicy w Sobote
class Saturday : public timeTable {
private:
    //011
    std::vector<std::string> workers;
public:
    void listWorkers() const override;

    //010
    //POLIMORFIZM
    void Responsibilities() const override;

    //008
    //Iterator
    const std::string& getFirstWorker() const override;

    //008
    //Iterator
    const std::string& getLastWorker() const override;

    void addWorker(const std::string& worker) override;

    void removeWorker(const std::string& worker) override;
};





#endif //CPP_SATURDAY_H
