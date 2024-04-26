#include<iostream>
using namespace std;
bool prost(int a)
{
	int del=2;
	for(int i=2;i<=a/2;i++)
	if(a%i==0)
	del++;
	if(del==2)
	return 0;
	else
	return 1;
}
int broj(int a, int b)
{
	int br=0;
	for(int i=a;i<=b;i++)
	{
		if(prost(i)==0&&prost(i+2)==0)
		{
			br++;
			cout<<i<<" "<<i+2<<endl;
		}
	}
	return br;
}
int main()
{
	int a,b;
	cout<<"Vnesi go pocetokot na opsegot ";
	cin>>a;
	cout<<"Vnesi go krajot na opsegot ";
	cin>>b;
	cout<<"Vo opsegot od "<<a<<" do "<<b<<" parovi na neparni broevi koi se razlikuvaat za 2 se vkupno: "<<broj(a,b);
}
