#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "classunit.h"

class JavaClassUnit : public ClassUnit
{
public:
    JavaClassUnit(const std::string &name, Flags classAccessModifier);

    static const std::vector<std::string> ACCESS_MODIFIERS;

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVACLASSUNIT_H
