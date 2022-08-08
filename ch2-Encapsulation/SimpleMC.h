#ifndef __SIMPLEMC_H__
#define __SIMPLEMC_H__
#include "PayOff1.h"

double SimpleMonteCarlo1(const PayOff& thePayOff,
						 double Expiry,
                         double Spot,
                         double Vol,
                         double r,
                         unsigned long NumberOfPaths);	

#include "SimpleMC_Implementation.h"
#endif