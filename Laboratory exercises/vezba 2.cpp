#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	float L,P,r;
	const float PI=3.14159;
	 cout<<"Vnesi go radiuso na krugot: "<<endl;
	 cin>>r;
	 L=2*r*PI;
	 P=pow(r,2)*PI;
	 cout<<"Perimetarot na krugot so radius "<<r<<" e "<<L<<endl;
	 cout<<"Plostinata na krugot so radius "<<r<<" e "<<P<<endl;
	 return 0;
}



