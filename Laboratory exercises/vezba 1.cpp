#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ime, prezime, adresa;
	int  broj;
	double index;
	cout<<"Vnesete ime: "<<endl;
	getline(cin, ime);
	cout<<"Vnesete prezime:"<<endl;
	getline(cin, prezime);
	cout<<"Vnesete adresa:"<<endl;
	getline(cin, adresa);
	cout<<"Vnesete broj na index:"<<endl;
	cin>>index;
	cout<<"Vnesete broj na ulicata:"<<endl;
	cin>>broj;
	cout<<endl;
	cout<<"PODATOCI ZA STUDENTOT"<<endl;
	cout<<" IME: "<<ime<<endl<<" PREZIME: "<<prezime<<endl<<" ULICA: "<<adresa<<endl<<" INDEX: "<<index<<endl<<" BR. "<<broj<<endl;
	return 0;
}
