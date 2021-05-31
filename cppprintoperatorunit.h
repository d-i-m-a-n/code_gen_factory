#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

class CPPPrintOperatorUnit : public PrintOperatorUnit
{
public:
    CPPPrintOperatorUnit(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // CPPPRINTOPERATORUNIT_H
