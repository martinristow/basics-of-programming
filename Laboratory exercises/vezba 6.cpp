#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,s,p;
	
	cout<<"Da se presmeta plostinata na triagolnikot!!!"<<endl;
	
	cout<<"Vnesi go prviot realen broj:"<<endl;
	cin>>a;
	
	cout<<"Vnesi go vtoriot realen broj:"<<endl;
	cin>>b;
	
	cout<<"Vnesi go tretiot realen broj:"<<endl;
	cin>>c;
	
	s=(a+b+c)/2;
	p=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Plostinata na triagolnikot iznesuva: "<<p<<endl;
	return 0;
	
}
