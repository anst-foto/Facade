#include <iostream>

#include "Person.h"
#include "Facade.h"

#include "ProxyExport.h"

int main() {
    auto person = new Person(2, "person");

    auto facade = new Facade(person, "person");
    facade->PersonToCsv();
    //facade->PersonToData();

    IExport* proxy = new ProxyExport(new PersonToCSV("person", person));
    proxy->Export();

    IExport* exp = new PersonToCSV("person", person);

    return 0;
}
