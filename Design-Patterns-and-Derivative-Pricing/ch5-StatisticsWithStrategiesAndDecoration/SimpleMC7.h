#ifndef __SIMPLEMC7_H__
#define __SIMPLEMC7_H__
#include "../ch4-BridgeWithAVirtualConstructor/Vanilla3.h"
#include "../ch4-BridgeWithAVirtualConstructor/Parameters.h"
#include "MCStatistics.h"

void SimpleMonteCarlo7(const VanillaOption& TheOption,
                       double               Spot,
                       const Parameters&    Vol,
                       const Parameters&    r,
                       unsigned long        NumberOfPaths,
                       StatisticsMC&        gatherer);

#include "SimpleMC7_Implementation.h"
#endif