#ifndef __SIMPLEMC5_H__
#define __SIMPLEMC5_H__
#include "Vanilla3.h"

double SimpleMonteCarlo5(const VanillaOption& TheOption,
                         double               Spot,
                         double               Vol,
                         double               r,
                         unsigned long        NumberOfPaths);

#include "SimpleMC5_Implementation.h"
#endif