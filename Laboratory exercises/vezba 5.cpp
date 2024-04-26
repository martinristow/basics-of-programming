#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int a,b,c,d;
	double a_sred;
	
	cout<<"Vnesi go prviot cel broj: "<<endl;
	cin>>a;
	
	cout<<"Vnesi go vtoriot cel broj: "<<endl;
	cin>>b;
	
	cout<<"Vnesi go tretiot cel broj: "<<endl;
	cin>>c;
	
	cout<<"Vnesi go cetvrtiot cel broj: "<<endl;
	cin>>d;
	
	a_sred=double(a+b+c+d)/4;
	cout<<"Aritmetickata sredina na ovie cetiri celi broevi iznesuva: "<<setprecision(3)<<a_sred;
	return 0;
}
