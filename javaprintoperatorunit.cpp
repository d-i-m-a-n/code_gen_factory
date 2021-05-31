#include "javaprintoperatorunit.h"

JavaPrintOperatorUnit::JavaPrintOperatorUnit(const std::string& text) : PrintOperatorUnit(text)
{

}

std::string JavaPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "System.out.println( \"" + m_text + "\" );\n";
}
