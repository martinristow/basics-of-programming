#include<iostream>
using namespace std;
bool zbir(int n)
{
	int a,b,c,d;
	a=n%10;
	n/=10;
	b=n%10;
	n/=10;
	c=n%10;
	d=n/10;
	if((a+b+c)==d)
	return 0;
	else return 1;
}
int main()
{
	for(int i=1000;i<=9999;i++)
	if(zbir(i)==0)
		cout<<i<<" ";
	return 0;
}
