#ifndef __SIMPLEMC2_H__
#define __SIMPLEMC2_H__
#include "PayOff2.h"

double SimpleMonteCarlo2(const PayOff& thePayOff,
                         double        Expiry,
                         double        Spot,
                         double        Vol,
                         double        r,
                         unsigned long NumberOfPaths);

#include "SimpleMC2_Implementation.h"
#endif