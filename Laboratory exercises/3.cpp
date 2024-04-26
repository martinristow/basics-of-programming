#include <iostream>
#include <string>
using namespace std;
int main()
{
int s1=0,s2=0;int ps=0;
int n,m,i,j;
int a[100][100];
int b[100][100];
cin>>n;
for(i=0;i<n;i++)
{
	s1=0;
	for(j=0;j<n;j++){
		cin>>a[i][j];
		b[i][j]=a[i][j];
		s1=s1+a[i][j];
	}
	b[i][j]=s1;
	ps=ps+s1;
	}	
	for(j=0;j<n;j++){
		s2=0;
		for(i=0;i<n;i++){
			s2=s2+a[i][j];
		}
		b[i][j]=s2;
	}
	b[i][j]=ps;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
