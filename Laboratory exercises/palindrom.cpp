# include <iostream>
using namespace std;
int main()
{
 int n,n1,obraten;
 cout<<"vnesi priroden broj ";
 cin>>n;
 obraten=0;
 while (n!=0)
 {
 n1=n%10;
 obraten=obraten*10+n1;
 n=n/10;
 }
 cout<<"obratniot broj e "<<obraten;
 return 0;
}
