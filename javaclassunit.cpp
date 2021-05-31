#include "javaclassunit.h"

const std::vector<std::string> JavaClassUnit::ACCESS_MODIFIERS = { "public","protected", "private", "final", "abstract" };

JavaClassUnit::JavaClassUnit(const std::string &name, Flags classAccessModifier)
{
    m_classAccessModifier = ClassUnit::LAST;

    switch (classAccessModifier) {
    case PUBLIC:
        m_classAccessModifier = 0;
        break;
    case PROTECTED:
        m_classAccessModifier = 1;
        break;
    case PRIVATE:
        m_classAccessModifier = 2;
        break;
    case FINAL:
        m_classAccessModifier = 3;
        break;
    case ABSTRACT:
        m_classAccessModifier = 4;
        break;
    }

    m_name = name;
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void JavaClassUnit::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = AccessModifier::PRIVATE;

    switch (flags) {
    case PUBLIC:
        accessModifier = 0;
        break;
    case PROTECTED:
        accessModifier = 1;
        break;
    case PRIVATE:
        accessModifier = 2;
        break;
    case FINAL:
        accessModifier = 3;
        break;
    case ABSTRACT:
        accessModifier = 4;
        break;
    }

    m_fields[accessModifier].push_back(unit);
}

std::string JavaClassUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level);
    if(m_classAccessModifier < ClassUnit::LAST)
            result += ACCESS_MODIFIERS[m_classAccessModifier] + ' ';
    result += "class " + m_name + " {\n";

    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(m_fields[i].empty()) {
            continue;
        }

        for(const auto& f : m_fields[i]) {
            result += ACCESS_MODIFIERS[i] + ' ' +f->compile(level + 1);
        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
