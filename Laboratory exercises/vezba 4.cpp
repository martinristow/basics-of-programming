#include <iostream>
using namespace std;

int main()
{
	int a, b, f, g, e, p;
	double c, d, i, v, k, o;
	cout<<"Vnesete go prviot cel broj: "<<endl;
	cin>>a;
	cout<<"Vnesete go vtoriot cel broj: "<<endl;
	cin>>b;
	cout<<"Vnesete go prviot realen broj: "<<endl;
	cin>>c;
	cout<<"Vnesete go vtoriot realen broj: "<<endl;
	cin>>d;
	
	f=a+b;
	g=a-b;
	e=a*b;
	i=a/b;
	p=a%b;
	
	v=a*c;
	cout<<"Proizvodot na prviot cel broj i prviot realen broj e: "<<v<<endl;
	k=c+d;
	cout<<"Zbirot na prviot realen broj i vtoriot realen broj e: "<<k<<endl;
	o=v/k;
	cout<<"Kolicnikot na proizvodot na prviot cel broj i prviot realen broj i zbirot na realnite broevi e: "<<o<<endl;
	return 0;
}
