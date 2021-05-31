#include "cshprintoperatorunit.h"

CSHPrintOperatorUnit::CSHPrintOperatorUnit(const std::string& text) : PrintOperatorUnit(text)
{

}

std::string CSHPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift(level) + "Console.WriteLine($\"" + m_text + "\" );\n";
}
