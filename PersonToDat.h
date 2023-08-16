//
// Created by Stari on 14.08.2023.
//

#ifndef UNTITLED_PERSONTODAT_H
#define UNTITLED_PERSONTODAT_H

#include <fstream>

#include "PersonExport.h"
#include "IExport.h"

using namespace std;

class PersonToDat : public PersonExportAbstract {
public:
    PersonToDat(const string &path, Person *person) : PersonExportAbstract(path, person) {}

    void Export() override {
        ofstream file;
        file.open(_path);

        file << _person->id << endl;
        file << _person->name << endl;

        file.close();
    }
};


#endif //UNTITLED_PERSONTODAT_H
