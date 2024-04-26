#include<iostream>
using namespace std;
int main()
{
	int niza1[100], niza2[100], niza3[100],n,i,j,k=0;
	cout<<"n=";
	cin>>n;
	cout<<"Vnesi gi elementite na prvata niza:"<<endl;
	for(i=0;i<n;i++)
		cin>>niza1[i];
	cout<<"Vnesi gi elementite na vtorata niza:"<<endl;
	for(i=0;i<n;i++)
		cin>>niza2[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(niza1[i]==niza2[j])
		{
			niza3[k]=niza1[i];
			k++;
		}
	}
	cout<<"Zaednicki elementi na prva i vtora niza  se elementite:"<<endl;
	for(i=0;i<k;i++)
		cout<<niza3[i]<<" ";
	return 0;
}
