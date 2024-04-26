#include<iostream>
using namespace std;

int main ()
{
	int n, suma=0; int i;
	cin>>n;
	for( i=1;i<n; i++)
	{
		suma=suma+i;
		cout<<i<<"+";
		if (suma+i+1>=n) break;
	}
	cout<<n-suma;
}
