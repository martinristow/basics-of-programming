#include<iostream>
using namespace std;
int NZS(int,int,int,int);
int NZD(int,int,int,int);
int najgolem(int,int,int,int);
int main()
{ int a, b, c, d;
cout<<"Vnesi 4 broja"<<endl;
cin>>a>>b>>c>>d;
cout<<"NZS na vnesenite broevi e "<<NZS(a,b,c,d)<<endl;
cout<<"NZD na vnesenite broevi e "<<NZD(a,b,c,d)<<endl;
return 0;
}
int NZS(int a,int b,int c,int d)
{
	int nzs=1;
	int i;
	for(i=2;i<=najgolem(a,b,c,d);i++)
		while(a%i==0||b%i==0||c%i==0||d%i==0)
		{
		nzs=nzs*i;
		if(a%i==0)
		a/=i;
		if(b%i==0)
		b/=i;
		if(c%i==0)
		c/=i;
		if(d%i==0)
		d/=i;
		}
	return nzs;
}
int NZD(int a,int b,int c,int d)
{
	int nzd=1;
	int i;
	for(i=2;i<=najgolem(a,b,c,d);i++)
	{
		if(a%i==0&&b%i==0&&c%i==0&&d%i==0)
		{
			nzd*=i;
			a/=i;
			b/=i;
			c/=i;
			d/=i;
		}
	}
	return nzd;
}
int najgolem(int a, int b, int c, int d)
{
	if(a>b&&a>c&&a>d)
	return a;
	if(b>a&&b>c&&b>d)
	return b;
	if(c>b&&c>a&&c>d)
	return c;
	if(d>b&&d>c&&d>a)
	return d;
}
