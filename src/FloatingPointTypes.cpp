//============================================================================
// Name        : FloatingPointTypes.cpp
// Author      : Pavlo Sukiasyan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 76.123456789 ;

	cout << "Size of float " <<sizeof(fValue)<< endl;
	cout << setprecision(20) << fixed <<fValue << endl;

	double dValue =  76.123456789 ;
	cout << "Size of double " <<sizeof(dValue)<< endl;
	cout << setprecision(20) << fixed <<dValue << endl;

	long double lValue = 76.1234567890123456789;
	cout << "Size of long double " <<sizeof(lValue)<< endl;
	cout << setprecision(20) << fixed <<lValue << endl;

	return 0;
}
