#ifndef PROGRAMMABSTRACTFACTORY_H
#define PROGRAMMABSTRACTFACTORY_H

#include <memory>

#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

class IProgrammFactory
{
public:
    using Flags = unsigned int;

    IProgrammFactory() = default;

    virtual std::shared_ptr<ClassUnit> createClassUnit(const std::string& name) = 0;

    virtual std::shared_ptr<MethodUnit> createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) = 0;

    virtual std::shared_ptr<PrintOperatorUnit> createPrintOperatorUnit(const std::string& text) = 0;

    virtual ~IProgrammFactory() = default;
};

#endif // PROGRAMMABSTRACTFACTORY_H
