#include "javaprogrammfactory.h"

#include "javaclassunit.h"
#include "javamethodunit.h"
#include "javaprintoperatorunit.h"

JavaProgrammFactory::JavaProgrammFactory()
{

}

std::shared_ptr<ClassUnit> JavaProgrammFactory::createClassUnit(const std::string& name, Flags classAccessMoifier)
{
    return std::make_shared<JavaClassUnit>(name, classAccessMoifier);
}

std::shared_ptr<MethodUnit> JavaProgrammFactory::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags)
{
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> JavaProgrammFactory::createPrintOperatorUnit(const std::string& text)
{
    return std::make_shared<JavaPrintOperatorUnit>(text);
}
