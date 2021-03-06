#ifndef H3FA1E1E1_4501_46E0_AAD7_11BDCEB8EAD7
#define H3FA1E1E1_4501_46E0_AAD7_11BDCEB8EAD7

#include <magellan/magellan.h>
#include <string>
#include <vector>

MAGELLAN_NS_BEGIN

struct Message
{
    Message(const std::string& desc, const std::string& detail = "");
    const std::string& str() const;

private:
    std::string msg;
};

MAGELLAN_NS_END

#endif
