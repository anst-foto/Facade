#include <iostream>

#include "Person.h"
#include "Facade.h"

int main() {
    auto person = new Person(2, "person");

    auto facade = new Facade(person, "person");
    facade->PersonToCsv();
    //facade->PersonToData();

    return 0;
}
