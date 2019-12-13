#include <iostream>
using namespace std;

int main()
{
    int n, x, prim = 1, s = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        prim = 1;
        for(int j = 2; j*j <= x; j++)
            if(x%j == 0)
                prim = 0;

        if(prim && x > 1)
            while(x)
            {
                s += x%10;
                x /= 10;
            }
    }

    cout << s;
    return 0;
}

