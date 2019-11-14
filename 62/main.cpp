#include <iostream>
using namespace std;

int main()
{
    int n, f = 2, p = 0, Max = 0, aux;
    cin >> n;
    while(n > 1)
    {
        p = 0;
        if(f*f > n)
            f = n;
        while(n%f == 0)
            n /= f, p++;
        if(p >= Max)
            Max = p, aux = f;
        if(f == 2)
            f++;
        else f += 2;
    }

    cout << aux;
    return 0;
}
