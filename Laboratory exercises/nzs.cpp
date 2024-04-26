#include<iostream>
using namespace std;

int main ()
{
	int a, b, nzs;
	cin>>a>>b;
	if (a>b) nzs=a; else nzs=b;
	while ((nzs%a!=0)|| (nzs%b!=0))
	  nzs++;
	cout<<nzs;
}
