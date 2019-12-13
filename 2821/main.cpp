#include <iostream>
using namespace std;

int main()
{
    int f = 2, p = 1, x, sw = 0;
    cin >> x;

    while(x != 1)
    {
        if(f*f > x)
            f = x;
        sw = 0;
        while(x%f == 0)
            sw = 1, x /= f;
        if(sw)
            p *= f;

        if(f == 2)
            f++;
        else
            f += 2;
    }

    cout << p;
    return 0;
}
