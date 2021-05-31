#ifndef CSHPROGRAMMFACTORY_H
#define CSHPROGRAMMFACTORY_H

#include "iprogrammfactory.h"

class CSHProgrammFactory : public IProgrammFactory
{
public:
    CSHProgrammFactory();

    std::shared_ptr<ClassUnit> createClassUnit(const std::string& name, Flags classAccessMoifier) override;

    std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) override;

    std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) override;
};

#endif // CSHPROGRAMMFACTORY_H
