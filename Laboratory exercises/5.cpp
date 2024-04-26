#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int s,k,n;
	cin>>k;
	cin>>n;
	s=k*2!-pow(k,2)*4!+pow(k,3)*6!+...+pow(-1,n+1)*pow(k,n)*(2*n)!<<endl;
	cout<<s;
	return 0;
}
