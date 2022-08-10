#ifndef __SIMPLEMC4_H__
#define __SIMPLEMC4_H__
#include "Vanilla2.h"

double SimpleMonteCarlo4(const VanillaOption& TheOption,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPaths);	

#include "SimpleMC4_Implementation.h"
#endif