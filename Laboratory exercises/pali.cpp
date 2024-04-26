#include <iostream>
#include<cmath>
using namespace std;
int main()
{

int a,broj,n,o,c,i;
cout<<"Vnesi broj: \n";
cin>>broj;
n=broj;
while(broj>=1)
{
	i=1;
	a=broj%10;
	broj=broj/10;
	i++;
}
o=0;
c=0;
while(i>=1)
{
	c=a*pow(10,i-1)
	o=o+c;
}
if(n==0)
cout<<"Brojot e palindrom. ";
else
cout<<"Brojot ne e palindrom ";
return 0;
}

