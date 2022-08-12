#include <iostream>
#include "SimpleMC2.h"
#include "DoubleDigital.h"
using namespace std;

int main()
{
    double        Expiry;
    double        Spot;
    double        Vol;
    double        r;
    double        Low, Up;
    unsigned long NumberOfPaths;

    cout << "Enter expiry: " << endl;
    cin >> Expiry;

    cout << "Enter low barrier: " << endl;
    cin >> Low;

    cout << "Enter up barrier: " << endl;
    cin >> Up;

    cout << "Enter spot: " << endl;
    cin >> Spot;

    cout << "Enter vol: " << endl;
    cin >> Vol;

    cout << "r: " << endl;
    cin >> r;

    cout << "Number of paths: " << endl;
    cin >> NumberOfPaths;

    PayOffDoubleDigital thePayOff(Low, Up);

    double result = SimpleMonteCarlo2(thePayOff,
                                      Expiry,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths);

    cout << "The price of the options are: " << result << endl;

    double tmp;
    cin >> tmp;

    return 0;
}