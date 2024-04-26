#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	int a, b, nzd=1;
	cin>>a>>b;
	for(int i=2; a>1&&b>1&&(i<=a/2||i<=b/2); i++)
	while((a%i==0)&&(b%i==0))
	{ 
	   a=a/i; b=b/i;
	   nzd=nzd*i;
	}
	cout<<nzd;
}
