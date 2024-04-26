#include<iostream> 
#include<cstdlib> 
#include<cmath> 
using namespace std; 
main()
 {  int i,n,p=1;
  cout<<"========================================="<<endl; 
  cout<<"Vnesete od koj broj:";  
  cin>>n;
  cout<<"========================================="<<endl;  
  for(i=n;i>1;i--)  
	{   
		p=p*i;    
	} 
   cout<<"Faktoriel od brojot "<<n<<" e "<<p<<endl; cout<<"========================================="<<endl; 
   system("pause");  
   return 0; 
 }

