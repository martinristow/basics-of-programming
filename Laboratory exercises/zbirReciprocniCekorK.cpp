#include<iostream> 
#include<cstdlib> 
#include<cmath> 
#include<iomanip>
using namespace std; 
main()
 {  float i,n1,n2,k;  
float s=0; 
 cout<<"==============================="<<endl;  
cout<<"Vnesete od koj broj:";  cin>>n1; 
 cout<<"Vnesete do koj broj:";  cin>>n2; 
  cout<<"Vnesete cekor:";  cin>>k;  
cout<<"==============================="<<endl;            
 for(i=n1;i<=n2;i+=k)       
     {              s=s+1/i;             }           
  cout<<"Zbirot reciprocnite vrednosti na broevite od "<<n1<<" do "<<n2<<" so cekor "<<k<<" e "<<fixed<<setprecision (5)<<s<<" ."<<endl;           
  cout<<"=============================="<<endl;            
 system("pause");            
 return 0;
 }

