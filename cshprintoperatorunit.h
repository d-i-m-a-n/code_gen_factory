#ifndef CSHPRINTOPERATORUNIT_H
#define CSHPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

class CSHPrintOperatorUnit : public PrintOperatorUnit
{
public:
    CSHPrintOperatorUnit(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHPRINTOPERATORUNIT_H
