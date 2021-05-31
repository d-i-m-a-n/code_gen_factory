#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H

#include "methodunit.h"

class CPPMethodUnit : public MethodUnit
{
public:
    CPPMethodUnit(const std::string& name, const std::string& returnType, Flags flags);

    std::string compile(unsigned int level = 0) const override;

};

#endif // CPPMETHODUNIT_H
