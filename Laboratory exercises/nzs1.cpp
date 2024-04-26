#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	int a, b, nzs=1;
	cin>>a>>b;
	for(int i=2; (a>1||b>1)&&(i<=a||i<=b); i++)
	while((a%i==0)||(b%i==0))
	{ 
	   if (a%i==0) a=a/i;
	   if (b%i==0) b=b/i;
	   nzs=nzs*i;
	}
	cout<<nzs;
}
