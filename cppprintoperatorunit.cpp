#include "cppprintoperatorunit.h"

CPPPrintOperatorUnit::CPPPrintOperatorUnit(const std::string& text) : PrintOperatorUnit(text)
{

}

std::string CPPPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "printf( \"" + m_text + "\" );\n";
}
