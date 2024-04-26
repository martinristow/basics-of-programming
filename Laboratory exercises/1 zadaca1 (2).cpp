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
int razlika(int a)
{
	int b;
	b=a;
	while(prost(b)==1)
		b++;
	cout<<b<<"-"<<a<<"=";
	return b-a;
}
int main()
{
	int n;
	cout<<"Vnesi broj"<<endl;
	cin>>n;
	cout<<razlika(n);
	return 0;
}
