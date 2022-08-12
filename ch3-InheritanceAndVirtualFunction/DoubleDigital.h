#ifndef __DOUBLEDIGITAL_H__
#define __DOUBLEDIGITAL_H__
#include "PayOff2.h"

class PayOffDoubleDigital : public PayOff
{
  public:
    PayOffDoubleDigital(double LowerLevel_, double UpperLevel_);
    virtual double operator()(double Spot) const;
    virtual ~PayOffDoubleDigital() {};

  private:
    double LowerLevel, UpperLevel;
};

#include "DoubleDigital_Implementation.h"
#endif