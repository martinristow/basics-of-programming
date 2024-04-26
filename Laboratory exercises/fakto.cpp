#include <iostream>
using namespace std;
int main()
{
	int suma,n,i,f,p;
	cout<<"Vnesi go limitot(n) "<<endl;
	cin>>n;
	suma=0;
	f=0;
	for(i=1;i<=n;i++)
	{
		if(i%n!=0)
		{
			p=i;
			while(p>0)
			{
				f=f+p;
				p--;
			}
			suma=suma+f;
		}
	}
	cout<<"Zbirot na faktorielite na neparnite broevi do "<<n<<"iznesuva : "<<suma;
	return 0;
	
}
