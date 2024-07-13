#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() 
{
	string sentence; char I;
	cout << "Enter a string:";
	getline(cin, sentence, '\n');
	
	int vowels = 0 , consonants = 0;
	{
		for (int i = 0; i <sentence.length(); i++)
		{
			I= tolower(sentence.at(i));
			if(isalpha(I)){
				switch (I){
					case 'a': case 'e': case 'i' :case 'o'
					:default : consonants += 1;
				}
				}
			}
		}
		cout << "There are" << vowels <<"vowels and " << "consonants" << "consonants";
	}
	:return 0;
}
