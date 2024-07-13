#include <bits/stdc++.h>
using namespace std;

int main() 
{

 int
ar[10]={34,4,51,45,12,16,8,9,100,67}
;
 int target;
 cout << "Enter the target variable";
value <<"endl:";
 cin>>target;
 int counter=0;
 for(int i=0;i<10;i++)
 {
 if(ar[i]==target)
 {
 cout<<"FOUND"<<endl;
 counter++;
 }
 }
 if(counter==0)
 {
 cout<<"NOT FOUND"<<endl;
 }

	return 0;
}
