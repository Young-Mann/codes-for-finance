// 引入了 PayOffBridge类 后的主程序，与之前的 VanillaMain2.cpp 几乎没有差别（除了 include 的头文件略有不同）！

#include "SimpleMC5.h"
#include "Vanilla3.h"
#include <iostream>
using namespace std;

int main()
{
    double        Expiry;
    double        Strike;
    double        Spot;
    double        Vol;
    double        r;
    unsigned long NumberOfPaths;

    cout << "\nEnter expiry\n";
    cin >> Expiry;
    // cout << "\nEnter low barrier\n"; cin >> Low;
    // cout << "\nEnter up barrier\n"; cin >> Up;
    cout << "\nEnter strike";
    cin >> Strike;
    cout << "\nEnter spot\n";
    cin >> Spot;
    cout << "\nEnter vol\n";
    cin >> Vol;
    cout << "\nr\n";
    cin >> r;
    cout << "\nNumber of paths\n";
    cin >> NumberOfPaths;

    PayOffCall    thePayOff(Strike);
    VanillaOption theOption(thePayOff, Expiry);
    double        result = SimpleMonteCarlo5(theOption, Spot, Vol, r, NumberOfPaths);

    cout << "\nThe price is " << result << ".\n";

    double tmp;
    cin >> tmp;

    return 0;
}