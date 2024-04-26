#include <iostream>
#include <cmath>
using namespace std;
int fact(int i){
	if(i<=1)
	return 1;
	else
	return i*fact(i-1);
}
int funk(int k,int n){
	int i=2;int m=1;
	if(n==1)
	return k*i;
	else{
		return pow(k,m)*fact(i);
		m++;i+=2;
	}
}
int main()
{
	int n,k;
	cout<<"Vnesi k i n"<<endl;
	cin>>k>>n;
	cout<<funk(k,n);
	return 0;
}
