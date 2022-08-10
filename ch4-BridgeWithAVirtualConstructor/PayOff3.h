#ifndef __PAYOFF3_H__
#define __PAYOFF3_H__

class PayOff
{
	public:
		PayOff(){};		
		virtual double operator() (double Spot) const = 0;
		virtual ~PayOff(){};
		virtual PayOff* clone() const = 0;
		
	private:
};

class PayOffCall : public PayOff
{
	public:
		PayOffCall(double Strike_);
		virtual double operator() (double Spot) const;
		virtual ~PayOffCall(){};
		virtual PayOff* clone() const;
		
	private:
		double Strike;
};

class PayOffPut : public PayOff
{
	public:
		PayOffPut(double Strike_);
		virtual double operator() (double Spot) const;
		virtual ~PayOffPut(){};
		virtual PayOff* clone() const;
		
	private:
		double Strike;
};

#include "PayOff3_Implementation.h"
#endif