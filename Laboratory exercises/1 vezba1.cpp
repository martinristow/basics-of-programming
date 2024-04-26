#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[100],i,n;
	cout<<"n=";
	cin>>n;
	cout<<"Vnesi gi elementite na prvata niza"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];	
	}
	cout<<"Vnesi gi elementite na vtorata niza"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"b["<<i<<"]=";
		cin>>b[i];	
	}
	for(i=0;i<n;i++)
		c[i]=a[i]+b[i];
	cout<<"Novodobienata niza gi sodrzi elementite: ";
	for(i=0;i<n;i++)
	cout<<c[i]<<" ";
	return 0;
	
}
