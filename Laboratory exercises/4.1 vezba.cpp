#include<iostream>
using namespace std;
int stepen(int,int);
int main()
{
	int x,n;
	cout<<"Vnesi go brojot od koj ke baras stepen"<<endl;
	cin>>x;
	cout<<"Vnesi go stepenot"<<endl;
	cin>>n;
	cout<<stepen(x,n);
	return 0;
}
int stepen(int x, int n)
{
	if(n==0)
	return 1;
	if(n==1)
	return x;
	return x*(stepen(x,n-1));
}
