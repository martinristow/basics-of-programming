#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        int x=a;
        a=b;
        b=x;
    }
    while(b)
    {
        int ost = a%b;
        a = b;
        b = ost;
    }
    cout << a;
    return 0;

}
