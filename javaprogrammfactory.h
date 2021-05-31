#ifndef JAVAPROGRAMMFACTORY_H
#define JAVAPROGRAMMFACTORY_H

#include "iprogrammfactory.h"

class JavaProgrammFactory : public IProgrammFactory
{
public:
    JavaProgrammFactory();

    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name, Flags classAccessMoifier) override;

    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;

    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // JAVAPROGRAMMFACTORY_H
