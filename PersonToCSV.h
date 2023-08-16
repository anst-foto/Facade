//
// Created by Stari on 14.08.2023.
//

#ifndef UNTITLED_PERSONTOCSV_H
#define UNTITLED_PERSONTOCSV_H

#include <fstream>

#include "PersonExport.h"
#include "IExport.h"

using namespace std;

class PersonToCSV : public PersonExportAbstract {
public:
    PersonToCSV(const string &path, Person *person) : PersonExportAbstract(path, person) {}

    void Export() override {
        ofstream file;
        file.open(_path);

        file << _person->id << "|" << _person->name << endl;

        file.close();
    }
};


#endif //UNTITLED_PERSONTOCSV_H
