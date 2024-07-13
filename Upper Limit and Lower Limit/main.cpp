#include <iostream>
using namespace std;

main() 
{
	int LL, UL, i, prime, temp, num;
	
	do
	{
		cout <<"Enter a Lower Limit Number: ";
		cin >> LL;
		cout <<"Enter an Upper Limit number:";
		cin >> UL;
	} while (LL < 0 || UL < 0);
	
	if (UL < LL)
	{
		temp = UL;
		UL = LL;
		LL = temp;
	}
	
	for (num = LL; num <= UL; num++)
	{
		prime  = 1;
		for (i =2; i <= num / 2; i++)
		{
			if (num % i ==0)
			{
				prime = 0;
				break;
			}
		}
		{
			if (prime == 1)
			cout << num << " ";
		}
	}
	return 0;
}
