#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],i;
	cout<<"Vnesi gi elementite na prvata niza:"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	cout<<"Vnesi gi elementite na vtorata niza:"<<endl;
	for(i=0;i<10;i++)
	cin>>b[i];
	cout<<"Dvete nizi imaat ednakvi clenovi na pozicii:"<<endl;
	for(i=0;i<10;i++)
		if(a[i]==b[i])
		cout<<i<<" ";
	return 0;
	
}
