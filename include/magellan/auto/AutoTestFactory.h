#ifndef _USDKQQD1YGIEJVTX87VTYCRVA9PSLATI4D280Q0SW0CUGGW4WG1Q2UO2               
#define _USDKQQD1YGIEJVTX87VTYCRVA9PSLATI4D280Q0SW0CUGGW4WG1Q2UO2

#include "magellan/auto/MetaTestFixture.h"
#include "magellan/core/TestFactory.h"

MAGELLAN_NS_BEGIN

template <typename Fixture>
struct AutoTestFactory : TestFactory
{
private:
    OVERRIDE(Test* make())
    {
        // !!! auto register all test methods to MetaTestFixture<Fixture>
        static Fixture fixture;
        return MetaTestFixture<Fixture>::suite();
    }
};

MAGELLAN_NS_END

#endif
