#include <iostream>
#define m 10
using namespace std;
int main ()
{
	int mat[m][m],a[m][m];
	int rez,i,j,n;
	do{
		cout<<"Vnesi go brojot na redici i koloni"<<endl;/////////////////////MATRICI/////////////RABOTAT///////////////102620/////////////
		cin>>n;
	}while(n<1||n>10);
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
	for(i=0;i<n+1;i++){
		a[i][n]=0;
		for(j=0;j<n;j++){
			a[i][j]=mat[i][j];
			a[i][n]+=mat[i][j];
		}
	}
	for(j=0;j<=n;j++){
		a[n][j]=0;
		for(i=0;i<n;i++)
		a[n][j]+=mat[i][j];
	}
	a[n][n]=0;
	for(j=0;j<n;j++)
	for(i=0;i<n;i++)
	a[n][n]+=mat[i][j];
	cout<<"Novata matrica e: "<<endl;
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++)
		cout<<" "<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
