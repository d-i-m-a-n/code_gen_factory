#include "cshclassunit.h"

const std::vector<std::string> CSHClassUnit::ACCESS_MODIFIERS = { "public","protected", "private", "internal",
                                                                  "protected internal", "private protected" };

CSHClassUnit::CSHClassUnit(const std::string &name, Flags classAccessModifier)
{
    m_classAccessModifier = ClassUnit::LAST;

    if(classAccessModifier < ACCESS_MODIFIERS.size())
        m_classAccessModifier = classAccessModifier;

    m_name = name;
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void CSHClassUnit::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = AccessModifier::PRIVATE;

    if(flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }

    m_fields[accessModifier].push_back(unit);
}

std::string CSHClassUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level);
    if(m_classAccessModifier < ClassUnit::LAST)
            result += ACCESS_MODIFIERS[m_classAccessModifier] + ' ';
    result += "class " + m_name + " {\n";

    for(size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(m_fields[i].empty()) {
            continue;
        }
        result += ACCESS_MODIFIERS[i] + ":\n";
        for(const auto& f : m_fields[i]) {
            result += f->compile(level + 1);
        }
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
