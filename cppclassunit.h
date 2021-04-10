#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H

#include "classunit.h"

class CPPClassUnit : public ClassUnit
{
public:
    CPPClassUnit(const std::string& name);

    std::string compile(unsigned int level = 0) const override;
};

#endif // CPPCLASSUNIT_H
