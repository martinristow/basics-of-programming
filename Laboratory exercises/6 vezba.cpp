#include <iostream>
#include <string>
using namespace std;
struct Avtomobil
{
int broj_tablica;
int godina_proizvodstvo;
string marka_avtomobil;
string sopstvenik;
};
void sort_avto(Avtomobil a[],int n)
{

for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i].godina_proizvodstvo<a[j].godina_proizvodstvo)
{
struct Avtomobil temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}


for (int j=0;j<n;j++)
{
cout<<a[j].broj_tablica<<endl;
cout<<a[j].godina_proizvodstvo<<endl;
cout<<a[j].marka_avtomobil<<endl;
cout<<a[j].sopstvenik<<endl;
cout<<endl;
}
}
int main()
{
int n,i,j;
cout<<"Vnesi broj na avtomobili: ";
cin>>n;
cout<<endl;
Avtomobil a[n];
for (i=0;i<n;i++)
{
cout<<"Vnesi broj na tablica na "<<i+1<<"-iot avtomobil: ";
cin>>a[i].broj_tablica;
if (a[i].broj_tablica<100 || a[i].broj_tablica>999 )
{
cout<<"Vnesete ispravna registracija"<<endl;
break;
}
cout<<"Vnesi godina na proizvodstvo na "<<i+1<<"-iot avtomobil: ";
cin>>a[i].godina_proizvodstvo;
cout<<"Vnesi marka na "<<i+1<<"-iot avtomobil: ";
cin>>a[i].marka_avtomobil;
cout<<"Vnesi sopstvenik na "<<i+1<<"-iot avtomobil: ";
cin>>a[i].sopstvenik;
cout<<endl<<endl;
}
sort_avto(a,n);
return 0;
}
