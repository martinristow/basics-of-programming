#include <iostream>
using namespace std;
int main()
{
	int a[i][j],r,k,g,s,n;
	cout<<"Vnesi go redot na matricata "<<endl;
	cin>>r;
	i=1;
	j=1;
	r=0;
	k=0;
	s=0;
	cout<<"Vnesi gi elementite na matricata : "<<endl;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cin>>a[i][j];
			j++;
		}
		i++;
	}
	i=1;
	while(i<=n)
	{
		r=a[i][j]+r;
		j++;
		cout<<i<<" redicata ima zbir "<<r<<endl;
		i++;
	}
	j=1;
	while(j<=n)
	{
		i=1;
		while(i<=n)
		{
			k=a[i][j]+k;
			i++
		}
		cout<<j<<" kolonata ima zbir: "<<k<<endl;
		j++;
	}
	i=1;
	j=1;
	while(i==j && i<=n)
	{
		g=g+a[i][j];
		i++;
		j++;
	}
	cout<<"Zbirot na glavnata dijagonala e : "<<g<<endl;
	i=n;
	j=1;
	while(j<=n)
	{
		s=s+a[i][j];
		j++;
		i--;
	}
	cout<<"Zbirot na sporednata dijagonala e : "<<s<<endl;
	return 0;
}
