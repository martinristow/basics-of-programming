#include <iostream>
using namespace std;
int main()
{
	long double Radius=15.625, radius=18.125;
	long double Povrsina, povrsina, allpovrsina;
	
	Povrsina=Radius*Radius*3.14159;
	povrsina=radius*radius*3.14159;
	allpovrsina=radius - Radius;
	
	cout<<"Svojstva na plocata"<<endl;
	cout<<"Nadvoresen radius:"<<Radius<<endl;
	cout<<"Vnatresen radius:"<<radius<<endl;
	cout<<"Cela povrsina:"<<allpovrsina<<endl;
	return 0;
	
}
