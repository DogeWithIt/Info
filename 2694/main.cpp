#include <iostream>
using namespace std;

int main()
{
    int a, b, Maxa = 0, Maxb = 0, Mina = 10, Minb = 10;
    cin >> a >> b;
    while(a)
    {
        if(a%10 < Mina)
            Mina = a%10;
        if(a%10 > Maxa)
            Maxa = a%10;
        a /= 10;
    }
    while(b)
    {
        if(b%10 < Minb)
            Minb = b%10;
        if(b%10 > Maxa)
            Maxb = b%10;
        b /= 10;
    }
    if(Maxa < Maxb)
    {
        Maxa ^= Maxb;
        Maxb ^= Maxa;
        Maxa ^= Maxb;
    }
    if(Mina < Minb)
    {
        Maxa ^= Maxb;
        Maxb ^= Maxa;
        Maxa ^= Maxb;
    }
    cout << Maxa*10+Maxb;

    if(Mina == 0)
        cout << Minb*10;
    else
        cout << Mina*10 + Minb;
    return 0;
}
