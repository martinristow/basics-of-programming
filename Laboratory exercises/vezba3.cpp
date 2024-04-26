#include <iostream>
#include <cmath>
using namespace std;

long binaren(int);

int main()
{
    int dekaden, binarenBroj;

    cout << " Vnesi dekaden broj ";
    cin >> dekaden;
    binarenBroj=binaren(dekaden);
    cout << dekaden << " od dekaden = " << binarenBroj << " vo binaren " << endl ;
    return 0;
}

 long binaren(int dekaden)
{
    long long binarenBroj = 0;
    int ostatok, i = 1, cekor = 1;

    while (dekaden!=0)
    {
        ostatok = dekaden%2;
        cout << "Cekor " << cekor++ << ": " << dekaden << "/2, Ostatok = " << ostatok << ", Kolicnik = " << dekaden/2 << endl;
        dekaden /= 2;
        binarenBroj += ostatok*i;
        i *= 10;
    }
    return binarenBroj;
}
