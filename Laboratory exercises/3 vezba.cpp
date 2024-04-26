#include <iostream>
using namespace std;
int main()
{
	int mat1[10][10],i,j,m,mat2[10][10];
	do
	{
	cout<<"Vnesi go redot na kvadratnata matrica: "<<endl;////////////////MATRICI///////////////////
	cin>>m;
	}
	 while(m<1||m>10);
	
	for(i=0;i<m;i++)
	for(j=0;j<m;j++)
	{
		cout<<"mat["<<i<<","<<j<<"]=";
		cin>>mat1[i][j];
	}
	
	cout<<"Vnesena e matricata:"<<endl;
	for(i=0;i<m;i++)
	{for(j=0;j<m;j++)
		cout<<mat1[i][j]<<"\t";
	cout<<endl;}
	
	for(i=0;i<m;i++)
	for(j=0;j<m;j++)
		mat2[i][j]=mat1[j][i];
		
	cout<<"Novata matrica e:"<<endl;
	for(i=0;i<m;i++)
	{for(j=0;j<m;j++)
		cout<<mat2[i][j]<<"\t";
	cout<<endl;}
	return 0;
}
