#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int i;
	double x,y;
 cout<<"========================\n";
 cout<<"| y=x-5 ->1 |\n";
 cout<<"| y=sin(x) ->2 |\n";
 cout<<"| y=cos(x) ->3 |\n";
 cout<<"| y=exp(x) ->4 |\n";
 cout<<"========================\n";
 cout<<"1,2,3 ili 4?\n";
 cin>>i;
 
 if(i==1|| i==2 || i==3 || i==4)
 {
 	cout<<"X=\n";
 	cin>>x;
 	switch(i)
 	{
 		case 1:y=x-5;break;
 		case 2:y=sin(x);break;
 		case 3: y=cos(x);break;
 		case 4:y=cos(x);break;
	 }
	 cout<<"Y= "<<y<<endl;
 }
 	else 
 	{
 		cout<<"Napravivte greska izbor!"<<endl;
 		return 0;
	 }
}
