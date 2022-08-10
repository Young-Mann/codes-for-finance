#ifndef __VANILLA2_H__
#define __VANILLA2_H__
#include "PayOff3.h"

class VanillaOption
{
	public:
		VanillaOption(const PayOff& ThePayOffPtr_, double Expiry_);
		VanillaOption(const VanillaOption& original);
		VanillaOption& operator=(const VanillaOption& original);
		~VanillaOption();
		
		double GetExpiry() const;
		double OptionPayOff(double Spot) const;
		
	private:
		PayOff* ThePayOffPtr;
		double Expiry;
};

#include "Vanilla2_Implementation.h"
#endif