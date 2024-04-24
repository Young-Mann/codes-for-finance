#ifndef __VANILLA3_H__
#define __VANILLA3_H__
#include "PayOffBridge.h"

class VanillaOption
{
  public:
    VanillaOption(const PayOff& ThePayOff_, double Expiry_);
    double OptionPayOff(double Spot) const;
    double GetExpiry() const;

  private:
    PayOffBridge ThePayOff;
    double       Expiry;
};

#include "Vanilla3_Implementation.h"
#endif