#include <QCoreApplication>

#include <iostream>

#include "unit.h"
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

#include "iprogrammfactory.h"
#include "cppprogrammfactory.h"

std::string generateProgram(IProgrammFactory* programmFactory) {
    auto myClass = programmFactory->createClassUnit("myClass");

    myClass->add(programmFactory->createMethodUnit("testFunc1", "void", 0), ClassUnit::PUBLIC);

    myClass->add(programmFactory->createMethodUnit("testFunc2", "void", MethodUnit::STATIC), ClassUnit::PRIVATE);

    myClass->add(programmFactory->createMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PUBLIC);

    auto method = programmFactory->createMethodUnit("testFunc4", "void", MethodUnit::STATIC);

    method->add(programmFactory->createPrintOperatorUnit(R"(Hello,world!\n)"));

    myClass->add(method, ClassUnit::PROTECTED );

    return myClass->compile();
}

int main() {
    CPPProgrammFactory cppFactory;

    std::cout << generateProgram(&cppFactory) << std::endl;

    return 0;
}

