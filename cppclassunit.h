#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H

#include "classunit.h"

class CPPClassUnit : public ClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;

    CPPClassUnit(const std::string& name);

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

    std::string compile(unsigned int level = 0) const override;
};

#endif // CPPCLASSUNIT_H
