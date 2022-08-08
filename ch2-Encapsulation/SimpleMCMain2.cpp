#include <iostream>
#include "SimpleMC.h"
using namespace std;

int main() 
{
	double Expiry;
    double Strike;
    double Spot;
    double Vol;
    double r;
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
	
	PayOff callPayOff(Strike, PayOff::call);
	PayOff putPayOff(Strike, PayOff::put);
	
	
    double resultCall = SimpleMonteCarlo2(callPayOff,
                                      Strike,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths);
									  
	double resultPut = SimpleMonteCarlo2(putPayOff,
                                      Strike,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths);

    cout << "The price of the options are: " << endl 
		 << "(call) " << resultCall << endl
		 << "(put)  " << resultPut << endl;

    double tmp;
    cin >> tmp;

    return 0;
}