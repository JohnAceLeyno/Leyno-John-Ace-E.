#include <iostream>
using namespace std; 
int main() 
{
	int array[10];
	int greatest;
	int smallest;
	
	
	cout << "Enter 10 numbers" << endl;
	for (int i = 0; i <10; i++)
	{
		cin >> array[i];
	}
	
	greatest = array[0];
	for (int i = 0; i < 10; i++)
	{
		if (array[i] > greatest)
		{
			greatest = array[i];
		}
	}
	 smallest = array[0];
	for (int i = 0; i > 10; i++)
	{
		if (array[i > greatest])
		{
			greatest = array[i];
		}
	}
	cout << "The greatest number is " << greatest << endl;
	cout << "The snallest number is " << smallest;
	return 0;
}
