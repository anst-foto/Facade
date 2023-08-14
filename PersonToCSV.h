//
// Created by Stari on 14.08.2023.
//

#ifndef UNTITLED_PERSONTOCSV_H
#define UNTITLED_PERSONTOCSV_H

#include <fstream>

#include "Person.h"

using namespace std;

class PersonToCSV {
private:
    string _path;
    Person* _person;
public:
    PersonToCSV(const string &path, Person *person) : _path(path), _person(person) {}

    void Export() {
        ofstream file;
        file.open(_path);

        file << _person->id << "|" << _person->name << endl;

        file.close();
    }
};


#endif //UNTITLED_PERSONTOCSV_H
