#include<iostream>
 #include<cstdlib>
 using namespace std;
 main() {     
int i,x,n,del=2,s=1;    
 cout<<"====================================="<<endl;     
cout<<"Vnesete za koj broj:";     cin>>x;     
cout<<"====================================="<<endl;     
cout<<1<<endl;         
 for(i=2;i<=x/2;i++)    
 {       if(x%i==0)      
 {           del++;    
         s=s+i;        
		   cout<<i<<endl;       }     
 }    
  cout<<"Vnesen e brojot "<<x<<endl;  
   cout<<"Zbirot na delitelite bez toj broj e"<<s<<endl;  
   cout<<"----------------------------------------------------------"<<endl;    
 if(x==s) cout<<"Vneseniot broj "<<x<<" e SOVRSEN."<<endl;     
    else cout<<"Vneseniot broj "<<x<<" NE e SOVRSEN."<<endl;       
  cout<<"---------------------------------------------------------"<<endl;   
  system("pause");  
   return 0; }   

