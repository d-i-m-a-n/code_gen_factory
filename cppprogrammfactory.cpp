#include "cppprogrammfactory.h"
#include "cppclassunit.h"

CPPProgrammFactory::CPPProgrammFactory()
{

}

std::shared_ptr<ClassUnit> CPPProgrammFactory::createClassUnit(const std::string& name)
{
    return std::make_shared<CPPClassUnit>(name);
}

std::shared_ptr<MethodUnit> CPPProgrammFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<MethodUnit>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> CPPProgrammFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<PrintOperatorUnit>(text);
}
