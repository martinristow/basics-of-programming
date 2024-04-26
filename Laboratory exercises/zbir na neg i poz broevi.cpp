#include <iostream>
using namespace std;
int main()
{
	int a,b,broj;
	a=0;
	b=0;
	do
	{
	
	cout<<"Vnesi broj\n";
	cin>>broj;
	if(broj>0)
	{
		a=broj+a;
	}
	 if(broj<0)
	{
		b=broj+b;
	}
}
	while(broj!=0);
	cout<<"Zbirot na pozitivni e "<<a<<" ,a zbirot na negativni e "<<b;
	return 0;
}

