//
// Created by Stari on 14.08.2023.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>

using namespace std;

class Person {
public:
    int id;
    string name;

    Person(int id, const string &name) : id(id), name(name) {}
};


#endif //UNTITLED_PERSON_H
