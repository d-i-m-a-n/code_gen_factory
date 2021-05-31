#include "cshprogrammfactory.h"

#include "cshclassunit.h"
#include "cshmethodunit.h"
#include "cshprintoperatorunit.h"

CSHProgrammFactory::CSHProgrammFactory()
{

}

std::shared_ptr<ClassUnit> CSHProgrammFactory::createClassUnit(const std::string& name, Flags classAccessMoifier)
{
    return std::make_shared<CSHClassUnit>(name, classAccessMoifier);
}

std::shared_ptr<MethodUnit> CSHProgrammFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<CSHMethodUnit>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> CSHProgrammFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<CSHPrintOperatorUnit>(text);
}
