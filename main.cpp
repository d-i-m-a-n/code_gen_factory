#include <QCoreApplication>

#include <iostream>

#include "unit.h"
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

#include "iprogrammfactory.h"
#include "cppprogrammfactory.h"
#include "cshprogrammfactory.h"
#include "javaprogrammfactory.h"

std::string generateProgram(IProgrammFactory* programmFactory) {
    auto myClass = programmFactory->createClassUnit("myClass", ClassUnit::PRIVATE);

    myClass->add(programmFactory->createMethodUnit("testFunc1", "void", 0), ClassUnit::INTERNAL);

    myClass->add(programmFactory->createMethodUnit("testFunc2", "void", MethodUnit::STATIC), ClassUnit::PRIVATE);

    myClass->add(programmFactory->createMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PROTECTED_INTERNAL);

    auto method = programmFactory->createMethodUnit("testFunc4", "void", MethodUnit::STATIC);

    method->add(programmFactory->createPrintOperatorUnit(R"(Hello,world!\n)"));

    myClass->add(method, ClassUnit::PRIVATE_PROTECTED);

    return myClass->compile();
}

int main() {
    CPPProgrammFactory cppFactory;
    CSHProgrammFactory cshFactory;
    JavaProgrammFactory javaFactory;

    std::cout << generateProgram(&cppFactory) << std::endl;

    std::cout << generateProgram(&cshFactory) << std::endl;

    std::cout << generateProgram(&javaFactory) << std::endl;

    return 0;
}

