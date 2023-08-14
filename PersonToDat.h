//
// Created by Stari on 14.08.2023.
//

#ifndef UNTITLED_PERSONTODAT_H
#define UNTITLED_PERSONTODAT_H

#include <fstream>

#include "Person.h"

using namespace std;

class PersonToDat {
private:
    string _path;
    Person* _person;
public:
    PersonToDat(const string &path, Person *person) : _path(path), _person(person) {}

    void Export() {
        ofstream file;
        file.open(_path);

        file << _person->id << endl;
        file << _person->name << endl;

        file.close();
    }
};


#endif //UNTITLED_PERSONTODAT_H
