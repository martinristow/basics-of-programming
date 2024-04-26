#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	char Znak;
	
	cout<<"Vnesi dva celi broja! \n";
	cin>>a>>b;
	cout<<"Vnesi nekoja operacija: \n";
	cin>>Znak;
	a+b;
	a-b;
	a*b;
	a/b;
	switch(a)
	{
		case '+':cout<<"Rezultatot iznesuva: ";break;
		case '-':cout<<"Rezultatot iznesuva: ";break;
		case '*':cout<<"Rezultatot iznesuva: ";break;
		case '/':cout<<"Rezultatot iznesuva: ";break;
		default:cout<<"Vnesovte greska operatot";break;
	}
	return 0;
}
