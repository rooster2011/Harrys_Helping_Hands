#include "stdafx.h"
#include "Reverse.h"
#include <iostream>

Reverse::Reverse()
{
	numberToReverse = 0;
}

long long Reverse::ReverseNumber()
{
	int n = numberToReverse;
	int reverse = 0, rem;
	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;

	}
	std::cout << "Reversed Number: " << reverse << std::endl;

	return 0;
}

void Reverse::setNum(long long n) {
	numberToReverse = n;
}


Reverse::~Reverse()
{
}
