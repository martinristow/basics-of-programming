#include<iostream>
using namespace std;
int main()
{
	int a[100], par[100], nepar[100], i,n,j=0,k=0;
	cout<<"n=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{par[j]=a[i];
		j++;}
		else
		{nepar[k]=a[i];
		k++;}
	}
	cout<<"Niza parni"<<endl;
	for(i=0;i<j;i++)
	cout<<par[i]<<endl;
	cout<<"Niza neparni"<<endl;
	for(i=0;i<k;i++)
	cout<<nepar[i]<<endl;
	return 0;
}
