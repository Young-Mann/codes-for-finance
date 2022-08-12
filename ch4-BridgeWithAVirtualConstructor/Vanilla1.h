#ifndef __VANILLA1_H__
#define __VANILLA1_H__
#include "../ch3-InheritanceAndVirtualFunction/PayOff2.h"

class VanillaOption
{
  public:
    VanillaOption(PayOff& ThePayOff_, double Expiry_);
    double GetExpiry() const;
    double OptionPayOff(double Spot) const;

  private:
    PayOff& ThePayOff;
    double  Expiry;
};

#include "Vanilla1_Implementation.h"
#endif