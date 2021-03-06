#include <magellan/listener/text/ListAllPrinter.h>
#include "magellan/core/Test.h"
#include <ostream>

MAGELLAN_NS_BEGIN

ListAllPrinter::ListAllPrinter(std::ostream& os) : os(os)
{}

void ListAllPrinter::startSuite(const Test& suite)
{
    if (suite.getName() != "All Tests" || suite.countChildTests() != 0)
    {
        os << suite.getName() << std::endl;
    }
}

namespace
{
    std::string getShortName(const std::string& name)
    {
        auto pos = name.find_first_of("::");
        return pos != std::string::npos ? name.substr(pos + 2) : name;
    }
}

void ListAllPrinter::startTest(const Test& test)
{
	os << "    " << getShortName(test.getName()) << std::endl;
}

MAGELLAN_NS_END




