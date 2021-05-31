#ifndef PRINTOPERATORUNIT_H
#define PRINTOPERATORUNIT_H

#include "unit.h"

class PrintOperatorUnit : public Unit {
public:
    explicit PrintOperatorUnit(const std::string& text);

    virtual std::string compile( unsigned int level = 0 ) const = 0;

    virtual ~PrintOperatorUnit() = default;

protected:
    std::string m_text;
};

#endif // PRINTOPERATORUNIT_H
