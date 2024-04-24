
VanillaOption::VanillaOption(const PayOff& ThePayOff_, double Expiry_)
    : ThePayOff(ThePayOff_), Expiry(Expiry_) {}

double VanillaOption::OptionPayOff(double Spot) const
{
    return ThePayOff(Spot);
}

double VanillaOption::GetExpiry() const
{
    return Expiry;
}