#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{ int n, m, cifra, suma1=0, p=1,suma2=0;
  cin>>n;
  cin>>m;
  
  for (int i=1;i<=n/2||i<=m/2; i++)
  { if (n%i==0) suma1+=i; 
  if (m%i==0) suma2+=i;
  }
  cout<<suma1<<endl;
   cout<<suma2<<endl;
  if(suma2==n&&suma1==m)
  cout<<"Broevite se prijatelski"<<endl;
  else 
 cout<<"ne se"<<endl;
}

