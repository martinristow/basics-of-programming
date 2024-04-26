#include<iostream>
using namespace std;
int main()
{
	int a[100],zp=0,zn=0,i,n;
	cout<<"n=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if((i%2==0)&&(a[i]%2==0)) 
		zp+=a[i];
		if((i%2!=0)&&(a[i]%2!=0)) 
		zn+=a[i];
	}
	cout<<"Zbirot na parnite clenovi od nizata na parni pozicii e "<<zp<<endl;
	cout<<"Zbirot na neparnite clenovi na neparni pozicii vo nizata e "<<zn<<endl;
	return 0;
	
}
