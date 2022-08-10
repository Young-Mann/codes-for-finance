#ifndef __SIMPLEMC6_H__
#define __SIMPLEMC6_H__
#include "Vanilla3.h"
#include "Parameters.h"

double SimpleMonteCarlo6(const VanillaOption& TheOption,
                         double Spot,
                         const Parameters& Vol,
                         const Parameters& r,
                         unsigned long NumberOfPaths);	

#include "SimpleMC6_Implementation.h"
#endif