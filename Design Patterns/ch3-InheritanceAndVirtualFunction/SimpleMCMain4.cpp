#include <iostream>
#include "SimpleMC2.h"
using namespace std;

int main()
{
    double        Expiry;
    double        Strike;
    double        Spot;
    double        Vol;
    double        r;
    unsigned long NumberOfPaths;

    cout << "Enter expiry: " << endl;
    cin >> Expiry;

    cout << "Enter strike: " << endl;
    cin >> Strike;

    cout << "Enter spot: " << endl;
    cin >> Spot;

    cout << "Enter vol: " << endl;
    cin >> Vol;

    cout << "r: " << endl;
    cin >> r;

    cout << "Number of paths: " << endl;
    cin >> NumberOfPaths;

    unsigned long optionType;

    cout << "\nenter 0 for call, otherwise put ";
    cin >> optionType;

    PayOff* thePayOffPtr;
    if (optionType == 0)
        thePayOffPtr = new PayOffCall(Strike);
    else
        thePayOffPtr = new PayOffPut(Strike);

    double result = SimpleMonteCarlo2(*thePayOffPtr,
                                      Expiry,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths);

    cout << "The price of the options are: " << result << endl;

    double tmp;
    cin >> tmp;

    delete thePayOffPtr;

    return 0;
}