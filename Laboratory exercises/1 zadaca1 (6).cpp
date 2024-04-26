#include<iostream>
using namespace std;
int evklidov_algoritam(int, int);
int main()
{
	int x,y;
	cout<<"Vnesi dva broja"<<endl;
	cin>>x>>y;
	cout<<"NZD na dvata broja e "<<evklidov_algoritam(x,y);
	return 0;
}
int evklidov_algoritam(int a, int b)
{
	if(a%b==0&&b!=0)
	return b;
	else 
	return evklidov_algoritam(b,a%b);
}
