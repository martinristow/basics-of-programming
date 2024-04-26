#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a,b,c,d;
	double a_sred;
	
	cout<<"***KE SE PRESMETUVA ARITMETICKA SREDINA NA 4 CELI BROEVI***"<<endl<<endl;
	
	cout<<"Vnesi 1 cel broj: "<<endl;
	cin>>a;
	
	cout<<"Vnesi 2 cel broj: "<<endl;
	cin>>b;
	
	cout<<"Vnesi 3 cel broj: "<<endl;
	cin>>c;
	
	cout<<"Vnesi 4 cel broj: "<<endl;
	cin>>d;
	
	a_sred=double(a+b+c+d)/4;
	cout<<"Aritmetickata sredina na site celi broevi iznesuva: "<<fixed<<setprecision(3)<<a_sred<<endl;
	return 0;
	
	
	
}
