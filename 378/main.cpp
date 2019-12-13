#include <iostream>
using namespace std;

int main()
{
    int r, a, b, aux, bux;
    cin >> a >> b;
    aux = a, bux = b;

    while(b)
    {
        r = a%b;
        a = b;
        b = r;
    }

    cout << (aux/a)*(bux/a) << ' ' << a;
    return 0;
}
