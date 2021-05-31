#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H

#include "methodunit.h"

class JavaMethodUnit : public MethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Flags flags);

    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVAMETHODUNIT_H
