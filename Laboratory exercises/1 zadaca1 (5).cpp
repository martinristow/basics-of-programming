#include<iostream>
using namespace std;
int cifra(long,int);
int main()
{
	int max;
	long n;
	cout<<"Vnesi broj ";
	cin>>n;
	max=n%10;
	cout<<"Najgolema cifra vo brojot "<<n<<" e cifrata "<<cifra(n,max);
	return 0;
}
int cifra(long a,int b)
{
	if(a==0)
		return b;
	else
	{	a/=10;
		if(a%10>b)
		b=a%10;
		return cifra(a,b);
	} 
}
