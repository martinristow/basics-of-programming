#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
	int r; 
	float p,l;
	char c;
	const double pi=3.14159;
cin>>r>>c;
if(c=='P'){
	p=r*r*pi;
	cout<<fixed<<setprecision(3)<<p;
}
else if (c=='L'){
	l=2*r*pi;
	cout<<fixed<<setprecision(3)<<l;
}
else
cout<<"Greshen vnes";

return 0;}

