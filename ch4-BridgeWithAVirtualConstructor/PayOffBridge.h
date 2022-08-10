#ifndef __PAYOFFBRIDGE_H__
#define __PAYOFFBRIDGE_H__
#include "PayOff3.h"

class PayOffBridge
{
    public:
        PayOffBridge(const PayOffBridge& original);
        PayOffBridge(const PayOff& innerPayOff);
        inline double operator()(double Spot) const;
        ~PayOffBridge();
        PayOffBridge& operator=(const PayOffBridge& original);
    
    private:
        PayOff* ThePayOffPtr;
};

inline double PayOffBridge::operator()(double Spot) const
{
    return ThePayOffPtr->operator()(Spot);
}

#include "PayOffBridge_Implementation.h"
#endif