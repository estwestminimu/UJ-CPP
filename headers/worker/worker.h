#ifndef CPP_WORKER_H
#define CPP_WORKER_H

#include "iostream"
#include "string"

class Worker {
protected:
    std::string name;
    std::string surname;
    int age;
    bool NDA; //Czy umowa o poufnosci zostala podpisana?
    int basicSalary = 3000; //Podstawowa pensja
    int HoursWorked = 0; //Ilosc przepracowanych godzin

    //deklaracja zaprzyjaźnionych funkcji
    friend void setHours(Worker &worker, int hours);

    //Konstruktor
    Worker(std::string tempName, std::string tempSurname, bool tempNDA, int tempAge);

    //Destruktor
    ~Worker();

public:

    //WYJATKI 001
    //Funkcja sprawdza czy pracownik ma skonczone 18 lat
    void setAge(int tempAge);

    std::string getName();

    std::string getUsername();

    bool getNDA();
    int getAge();

    void setName(std::string tempName);

    void setsurname(std::string tempSurname);

    void setNDA(bool tempNDA);

    //Metoda czysto wirtualna =0 zostanie przyslonieta przez klasy pochodne
    //Metoda do obliczania zarobkow jakie dostanie pracownik
    virtual int calcSalary() const = 0;

};




#endif //CPP_WORKER_H
