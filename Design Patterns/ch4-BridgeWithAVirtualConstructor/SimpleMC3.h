#ifndef __SIMPLEMC3_H__
#define __SIMPLEMC3_H__
#include "Vanilla1.h"

double SimpleMonteCarlo3(const VanillaOption& TheOption,
                         double               Spot,
                         double               Vol,
                         double               r,
                         unsigned long        NumberOfPaths);

#include "SimpleMC3_Implementation.h"
#endif