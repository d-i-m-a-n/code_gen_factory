#ifndef JAVAPRINTOPERATORUNIT_H
#define JAVAPRINTOPERATORUNIT_H

#include "printoperatorunit.h"

class JavaPrintOperatorUnit : public PrintOperatorUnit
{
public:
    JavaPrintOperatorUnit(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVAPRINTOPERATORUNIT_H
