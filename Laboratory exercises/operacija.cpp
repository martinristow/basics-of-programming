#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	char znak;
	cout<<"Vnesete dva broja \n"; cin>>a>>b;
	cout<<"Vnesi edna operacija (+,-,*,/,%) \n"; cin>>znak;
	
	if(znak=='+')
	cout<<"C= "<<a<<" "<<znak<<" "<<b<<" = "<<a+b;
	else if(znak=='-')
	cout<<"C= "<<a<<" "<<znak<<" "<<b<<" = "<<a-b;
	else if(znak=='*')
	cout<<"C= "<<a<<" "<<znak<<" "<<b<<" = "<<a*b;
	else if(znak=='/')
	cout<<"C= "<<a<<" "<<znak<<" "<<b<<" = "<<a/b;
	else if(znak=='%')
	cout<<"C= "<<a<<" "<<znak<<" "<<b<<" = "<<a%b;
	else 
	cout<<"Vnesovte greska operator, potrebno e (+,-,*,/,%) \n";
	return 0;
}
