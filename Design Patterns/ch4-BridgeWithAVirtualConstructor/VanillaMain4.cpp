
#include "SimpleMC6.h"
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

    ParametersConstant VolParam(Vol);
    ParametersConstant rParam(r);
    PayOffCall         thePayOff(Strike);
    VanillaOption      theOption(thePayOff, Expiry);
    double             result = SimpleMonteCarlo6(theOption, Spot, VolParam, rParam, NumberOfPaths);

    cout << "\nThe price is " << result << ".\n";

    double tmp;
    cin >> tmp;

    return 0;
}