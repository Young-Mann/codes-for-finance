
PayOffBridge::PayOffBridge(const PayOffBridge& original)
{
    ThePayOffPtr = original.ThePayOffPtr->clone();
}

PayOffBridge::PayOffBridge(const PayOff& innerPayOff)
{
    // innerPayOff 类似于结构体变量，而不是结构体指针变量，所以这里不是 innerPayOff->clone()
    ThePayOffPtr = innerPayOff.clone();
}

PayOffBridge::~PayOffBridge()
{
    delete ThePayOffPtr;
}

PayOffBridge& PayOffBridge::operator=(const PayOffBridge& original)
{
    // 自己之前写错，写成了：if (PayOffBridge.ThePayOffPtr != original.ThePayOffPtr)
    if (this != &original)
    {
        delete ThePayOffPtr;
        ThePayOffPtr = original.ThePayOffPtr->clone();
    }
    return *this;
}
