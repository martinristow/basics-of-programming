#include <iostream>
#define m 10
using namespace std;
int main ()
{
	int mat[m][m];
	int i,rez,n,j;
	do
	{
		cout<<"Vnesete broj na redici i koloni"<<endl;
		cin>>n;
	}
	while(n<1||n>10);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++){
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>mat[i][j];
	}
	cout<<"Vnesenata matrica e: "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		cout<<" "<<mat[i][j]<<" ";
		cout<<endl;
	}
	rez=1;
	if(n%2==0)
	rez=-1;
	else 
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(mat[i][j]!=mat[n-1-i][n-1-j])
				{
					rez=0;
					break;
					break;
				}
			}
		}
	}
	cout<<"Odgovorot e "<<rez<<endl;
	return 0;
}
