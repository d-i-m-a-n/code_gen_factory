#ifndef CPPPROGRAMMFACTORY_H
#define CPPPROGRAMMFACTORY_H

#include "iprogrammfactory.h"

class CPPProgrammFactory : public IProgrammFactory
{
public:
    CPPProgrammFactory();

    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name) override;

    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;

    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // CPPPROGRAMMFACTORY_H
