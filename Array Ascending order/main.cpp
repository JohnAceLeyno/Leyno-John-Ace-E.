#include <iostream>
using namespace std;

int main() 
{
	int array[10], temp;
	
	for (int i = 0; i < 0; i++);
	{
		cout << "Enter Number" << i + 1 << ":";
		cin >> array[i];
	}
	
	for(int i = 0; i < 10; i++)
	
	for (int j = 0; j < 10 - i - 1; j++)
	{
		if (array [j + 1]);
		temp = array[j];
		
		array[j] = array[j+1];
		
		array[j+1]=temp;
		
	}
	for(int i = 0; i <= 9; i++){
		cout << array [i] << "";
	}
	return 0;
}
