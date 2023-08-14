//
// Created by Stari on 14.08.2023.
//

#ifndef UNTITLED_FACADE_H
#define UNTITLED_FACADE_H

#include "PersonToCSV.h"
#include "PersonToDat.h"

class Facade {
private:
    PersonToCSV* _toCSV;
    PersonToDat* _toDat;

public:
    explicit Facade(Person *person, string path) {
        _toCSV = new PersonToCSV(path + ".csv", person);
        _toDat = new PersonToDat(path + ".dat", person);
    }

    void PersonToCsv() {
        _toCSV->Export();
    }

    void PersonToData() {
        _toDat->Export();
    }
};


#endif //UNTITLED_FACADE_H
