#include<iostream> 
#include<cstdlib> 
using namespace std; 
main() 
{  int p,broj,poz=0,neg=0;  
      
  cout<<"Vnesete broj: "; 
 cin>>broj;  
while(broj!=0)   {       
       if(broj>0)              
  poz+=broj;          
    else                 
 neg=neg+abs(broj);        
 cout<<"Vnesete nov broj:";  
 cin>>broj;              
}            
  p=poz*neg;             
 cout<<"Proizvodot na zbirovite na pozitivnite i negativnite broevi e:"    ;              
 cout<<p<<"."<<endl;                
system("pause"); 
 return 0;
 }

