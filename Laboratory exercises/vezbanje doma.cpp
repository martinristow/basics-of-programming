#include <iostream>
using namespace std;

int main()
{
	int a,b,e,f,g,o;
	float c,d,i,p,t,z;
	cout<<"Vnesi prv cel broj:"<<endl;
	cin>>a;
	
	cout<<"Vnesi vtor cel broj:"<<endl;
	cin>>b;
	
	cout<<"Vnesi prv realen broj:"<<endl;
	cin>>c;
	
	cout<<"Vnesi vtor realen broj:"<<endl;
	cin>>d;
	
	e=a+b;
	f=a-b;
	g=a*b;
	i=a/b;
	o=a%b;
	
	cout<<"Zbirot na a+b= "<<e<<endl;
	cout<<"Razlikata na a-b= "<<f<<endl;
	cout<<"Proizvodot na a*b= "<<g<<endl;
	cout<<"Kolicnikot na a/b= "<<i<<endl;
	cout<<"Ostatokot  na a%b= "<<o<<endl;
	
	p=a*c;
	cout<<"Proizvodot na prviot cel broj i prviot realen broj iznesuva: "<<p<<endl;
	t=c+d;
	cout<<"Zbirot na prviot realen broj i vtoriot realen broj iznesuva: "<<t<<endl;
	z=p/t;
	cout<<"Kolicnikot od proizvodot na prviot cel broj i prviot realen broj i"<<endl;
	cout<<"zbirot na prviot realen broj i vtoriot realen broj iznesuva: "<<z<<endl;
	return 0;
	
}
