#include <iostream>

using namespace std;
/////////////////////////////////////////////////////////////////

int main() {
	int x,y,z,r,a,b,c,m;
	cout<<"Vnesi eden trocifren broj: "<<endl;
	cin>>r;
//////////////////////////////////////////////////////////////////
	z=r%10;
	y=r%100/10;
	x=r/100;
	if(x>z && x>y )
	{
	a=x;
	if(y>z)
	{
		b=y;
		c=z;
	}
	else if(z>y){
		b=z;
		c=y;
	}
}  
    else if(y>x&&y>z){
    	a=y;
    if(x>z){
    	b=x;
    	c=z;
	}
	else if(z>x){
		b=z;
		c=x;
	}
	}
	else if(z>x&&z>y){
		a=z;
		if(x>y){
			b=x;
			c=y;
		}
		else if(y>x){
			b=y;
			c=x;
		}
	}
	m=a*100+b*10+c;
	cout<<m;
	return 0;
}
