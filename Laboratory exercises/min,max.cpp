#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	float a,b;
	double z;
	cout<<"Vnesi dva broja: \n"; cin>>a>>b;
	z=(1-min(a,b))/(z=1+max(pow(a,2),(pow(b,2))));
	
	cout<<fixed<<setprecision(3)<<z;
	return 0;
}
