#include "iostream"
#include "worker.h"

// 004
//Konstruktor
Worker::Worker(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge) {
    setName(tempName);
    setsurname(tempSurname);
    setNDA(tempNDA);
    setAge(tempAge);
}

//005
//Destruktor
Worker::~Worker() {
    std::cout << "Pracownik: " << name << " " << surname << " zostal zwolniony" << std::endl;

}

//WYJATKI 001
void Worker::setAge(int tempAge) {
    std::cout << tempAge;
    try {
        if (tempAge >= 18) {
            age = tempAge;
        } else {
            throw (tempAge);
        }
    }
        //Jeśli ktoś ma mniej niż 18 lat
    catch (int myNum) {
        std::cout << "Nie mozesz zatrudnic osoby ponizej 18 lat!" << std::endl;
    }
        //jeśli stanie się coś innego co nie jest poprawne
    catch (...) {
        std::cout << "Niepoprawne dane\n";
    }
}

std::string Worker::getName() {
    return name;
}

std::string Worker::getUsername() {
    return surname;
}

bool Worker::getNDA() {
    return NDA;
}

int Worker::getAge() {
    return age;
}

void Worker::setName(std::string tempName) {
    name = tempName;
}

void Worker::setsurname(std::string tempSurname) {
    surname = tempSurname;
}

void Worker::setNDA(bool tempNDA) {
    NDA = tempNDA;
}