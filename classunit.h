#ifndef CLASSUNIT_H
#define CLASSUNIT_H
#include <vector>

#include "unit.h"


class ClassUnit : public Unit
{
public:

    enum AccessModifier {
        PUBLIC,
        PROTECTED,
        PRIVATE,
        INTERNAL,
        PROTECTED_INTERNAL,
        PRIVATE_PROTECTED,
        FINAL,
        ABSTRACT,

        LAST
    };

public:
    ClassUnit() = default;

    virtual void add(const std::shared_ptr<Unit>& unit, Flags flags) = 0;

    virtual std::string compile(unsigned int level = 0) const = 0;

    virtual ~ClassUnit() = default;

protected:
    Flags m_classAccessModifier;
    std::string m_name;
    using Fields = std::vector<std::shared_ptr<Unit>>;
    std::vector<Fields> m_fields;
};

#endif // CLASSUNIT_H
