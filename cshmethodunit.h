#ifndef CSHMETHODUNIT_H
#define CSHMETHODUNIT_H

#include "methodunit.h"

class CSHMethodUnit : public MethodUnit
{
public:
    CSHMethodUnit(const std::string& name, const std::string& returnType, Flags flags);

    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHMETHODUNIT_H
