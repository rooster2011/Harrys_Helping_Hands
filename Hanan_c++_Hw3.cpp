// Hanan_c++_Hw3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Reverse.h"

using namespace std;

int main()
{ 
	Reverse numberToReverse;
	// Take Integer in and reverse
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	numberToReverse.setNum(n);
	numberToReverse.ReverseNumber();






	system("pause");
	return 0;
}