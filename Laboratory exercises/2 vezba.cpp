#include <iostream>
#define m 10
using namespace std;
int main ()
{
	int mat[m][m], a[m][m];
	int rez, i, j, n;
	do
	{
		cout<<"Brojot na redici i koloni e: "<<endl;////////////////////MATRICA 10X10////////////////
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
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=mat[n-j-1][n-i-1];
		}
	}
	cout<<"Preslikanata matrica vo odnos na sporednata dijagonala e "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		cout<<" "<<a[i][j]<<" ";///////////RABOTI//////////////
		cout<<endl;
	}
	return 0;
}
