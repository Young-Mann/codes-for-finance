
VanillaOption::VanillaOption(const PayOff& ThePayOffPtr_, double Expiry_)
    : Expiry(Expiry_)
{
    ThePayOffPtr = ThePayOffPtr_.clone();
};

VanillaOption::VanillaOption(const VanillaOption& original)
{
    Expiry       = original.Expiry;
    ThePayOffPtr = original.ThePayOffPtr->clone();
}

// 返回类型为引用可以减少拷贝函数的调用次数，在形如"a=b=c"的情形下提高效率
VanillaOption& VanillaOption::operator=(const VanillaOption& original)
{
    if (this != &original) {
        Expiry = original.Expiry;
        delete ThePayOffPtr;
        ThePayOffPtr = original.ThePayOffPtr->clone();
    }
    return *this;
}

VanillaOption::~VanillaOption()
{
    delete ThePayOffPtr;
}

double VanillaOption::GetExpiry() const
{
    return Expiry;
}

double VanillaOption::OptionPayOff(double Spot) const
{
    return (*ThePayOffPtr)(Spot);
}