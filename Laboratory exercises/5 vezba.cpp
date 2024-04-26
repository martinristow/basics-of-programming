#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
struct cilindar
{
float r;
float h;
};
struct presmetka
{
float v;
float p;
};
void izvrsi_presmetki(struct cilindar c)
{
struct presmetka p;
p.p=2*c.r*pi*(c.r*c.h);
p.v=pow(c.r,2)*pi*c.h;
cout<<"Plostina: "<<p.p<<"\nVolumen: "<<p.v;
}
int main()
{
struct cilindar c;
cout<<"Vnesi radius: ";
cin>>c.r;
cout<<"Vnesi visina: ";
cin>>c.h;
izvrsi_presmetki(c);
return 0;
}
