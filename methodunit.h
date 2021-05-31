#ifndef METHODUNIT_H
#define METHODUNIT_H
#include <vector>

#include "unit.h"

class MethodUnit : public Unit {
public:
    enum Modifier {
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3,
        ABSTRACT = 1 << 4,
    };

public:
    MethodUnit(const std::string& name, const std::string& returnType, Flags flags);

    void add(const std::shared_ptr< Unit >& unit, Flags flags = 0);

    virtual std::string compile(unsigned int level = 0) const = 0;

    virtual ~MethodUnit() = default;

protected:
    std::string m_name;
    std::string m_returnType;
    Flags m_flags;
    std::vector<std::shared_ptr<Unit>> m_body;
};

#endif // METHODUNIT_H
