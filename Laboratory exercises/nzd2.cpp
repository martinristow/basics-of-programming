 
 #include<iostream>
using namespace std;

int main ()
{ int a, b;
 cout<<" vnesi 2 broja "<<endl;
    cin>>a>>b;
    while ( a!= b ) {
        if (a>b)
            a -= b;
        else
            b -= a;
    }
    cout<<a;

}
