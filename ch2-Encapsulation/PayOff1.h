#ifndef __PAYOFF1_H__
#define __PAYOFF1_H__

class PayOff
{
	public:
		enum OptionType {call, put};
		PayOff(double Strike_, OptionType TheOptionsType_);
		double operator() (double Spot) const;
		
	private:
		double Strike;
		OptionType TheOptionsType;
};

#include "PayOff1_Implementation.h"
#endif