#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int oceni[10],zbir=0,i;
	cout<<"Vnesi gi osenite:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>oceni[i];
		zbir+=oceni[i];
	}
	cout<<"Prosekot na ucenikot e:"<<fixed<<setprecision(2)<<zbir/10.0;
	return 0;
	
}
