#include<iostream>
#include<cstdlib>
using namespace std;
 int main() 
 {     
int i,x,n,del=2, a, b;    
cin>>a>>b;   
for (int i=a; i<=b; i++)   
{
 int s=1;
 for(int j=2;j<=i/2;j++)    
 {       if(i%j==0)      
           s=s+j;        
		             
 } 
 if (i==s)
 cout<<i<<endl;
}
 
   return 0; 
} 
