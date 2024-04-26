#include <iostream>

using namespace std;

int main()
{
    int a, b, br, suma, cifra;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
    {
	
    br=i;
    int suma=0;
    while(br>0){
    	cifra=br%10;
    	suma=suma+cifra;
    	br=br/10;
	}
	if (i%suma==0) cout <<i<< endl;
}
    return 0;

}
