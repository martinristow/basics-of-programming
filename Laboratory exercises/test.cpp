#include<iostream>
using namespace std;
int faktoriel(int n)
{
	if(n==1)
	return 1;
	else
	return n*(faktoriel(n-1));
}
int main()
{
	int n,i,suma=0;
	cout<<"Vnesi broj"<<endl;
	cin>>n;
	if(n%2!=0)
	for(i=1;i<=n;i+=2)
		suma=suma+faktoriel(i);
	else
	for(i=1;i<=n-1;i+=2)
		suma=suma+faktoriel(i);
	cout<<suma;
	return 0;
}
