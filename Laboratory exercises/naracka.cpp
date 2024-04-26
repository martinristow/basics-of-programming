#include <iostream>
using namespace std;

struct Naracka();
{
	int sifra;
	chat ime;
	char proizvod;
	int kolicina;
	int cena;
}
struct Data();
{
	int den;
	int mesec;
	int god;
}
int main()
{
	int k,s,i,r,n;
	
cout<<"Kolku naracki ke vnesuvate ? \n";
cin>>s;
for(i=1;i<=s,i++)
{
	cout<<"Vnesete ja narackata broj "<<i<<endl;
	struct Naracka naracka;
	cout<<"Vnesete ja cifrata na proizvodot: \n";
	cin>>Naracka[i].cifra;
	cout<<"Vasheto ime: \n ";
	cin>>Naracka[i].ime;
	cout<<"Imeto na proizvodot: \n";
	cin>>Naracka[i].proizvod;
	cout<<"Kolicinata: \n";
	cin>>Naracka[i].kolicina;
	cout<<"Cena: \n";
	cin>>Naracka[i].cena;
	struct Data data;
	cout<<" Datumot vo format DD/MM/YY \n";
	cin>>data[i].den>>data[i].mesec>>data[i].god;
}
k=0;
i=1;
while(i<=5)
{
	r=Naracka[i].cena*Naracka[i].kolicina;
	if(r>k)
	{
		k=r;
		n=i;
	}
	i++;
}
cout<<"Najvisoka cena ima narackata : \n ";
cout<<Naracka[i].sifra<<endl<<Naracka[i].ime<<endl<<Naracka[i].proizvod;
cout<<"Narackata e napravena na : "<<data[n].den<<"."<<data[n].mesec<<"."<<data[n].god<<endl;
return 0;
}

