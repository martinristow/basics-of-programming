#include<iostream>
using namespace std;
int zbir(int k)
{
	if(k==1)
	return k;
	else return k+zbir(k-1);
}
int fac(int a)
{
	if(a==1)
	return a;
	else return a*fac(a-1);
}
int main()
{
	int zb=0,n;
	cout<<"Do koj broj ke baras zbir na fakturieli"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	zb+=fac(zbir(i));
	cout<<"Zbirot e "<<zb;
	return 0;
}
