#include<iostream>
#include "UTSimpleMC2.h"

using namespace std;

int main()
{
	double Expiry;
	double Strike;
	double Spot;
	double Vol;
	double r;
	unsigned long NumberOfPaths;

	cout << "\nEnter expiry\n";
	cin >> Expiry;

	cout << "\nEnter strike\n";
	cin >> Strike;

	cout << "\nEnter spot\n";
	cin >> Spot;

	cout << "\nEnter vol\n";
	cin >> Vol;

	cout << "\nEnter r\n";
	cin >> r;

	cout << "\nNumber of paths\n";
	cin >> NumberOfPaths;

	UTPayOffCall callPayOff(Strike);
	UTPayOffPut putPayOff(Strike);

	double resultCall = SimpleMonteCarlo2(callPayOff,
		Expiry,
		Spot,
		Vol,
		r,
		NumberOfPaths);

	double resultPut = SimpleMonteCarlo2(putPayOff,
		Expiry,
		Spot,
		Vol,
		r,
		NumberOfPaths);

	cout << "the prices are " << resultCall << "  for the call and "
		<< resultPut << " for the put\n";

	double tmp;
	cin >> tmp;

	return 0;

}

/*
*
* Copyright (c) 2002
* Mark Joshi
*
* Permission to use, copy, modify, distribute and sell this
* software for any purpose is hereby
* granted without fee, provided that the above copyright notice
* appear in all copies and that both that copyright notice and
* this permission notice appear in supporting documentation.
* Mark Joshi makes no representations about the
* suitability of this software for any purpose. It is provided
* "as is" without express or implied warranty.
*/

