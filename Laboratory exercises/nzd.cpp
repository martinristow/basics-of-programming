#include<iostream>
using namespace std;

int main ()
{
	int a, b, nzd, nzs;
	cin>>a>>b;
	if (a<b) nzd=a; else nzd=b;
	while ((a%nzd!=0) || (b%nzd!=0))
	       nzd--;
	cout<<"nzd="<<nzd<<endl;
	nzs=a*b/nzd;
	cout<<"nzs="<<nzs;
}
