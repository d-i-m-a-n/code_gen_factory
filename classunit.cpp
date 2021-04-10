#include "classunit.h"
const std::vector<std::string> ClassUnit::ACCESS_MODIFIERS = { "public","protected", "private" };

ClassUnit::ClassUnit( const std::string& name ) : m_name( name ) {
    m_fields.resize( ACCESS_MODIFIERS.size() );
}

void ClassUnit::add(const std::shared_ptr<Unit>& unit, Flags flags) {
    int accessModifier = PRIVATE;

    if(flags < ACCESS_MODIFIERS.size()) {
        accessModifier = flags;
    }

    m_fields[accessModifier].push_back(unit);
}
