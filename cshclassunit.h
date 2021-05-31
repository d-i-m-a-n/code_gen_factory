#ifndef CSHCLASSUNIT_H
#define CSHCLASSUNIT_H

#include "classunit.h"

class CSHClassUnit : public ClassUnit
{
public:

    static const std::vector<std::string> ACCESS_MODIFIERS;

    CSHClassUnit(const std::string &name, Flags classAccessModifier);

    void add(const std::shared_ptr<Unit> &unit, Flags flags) override;

    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHCLASSUNIT_H
