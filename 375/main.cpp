#include <iostream>
using namespace std;

int main()
{
    int n, sw = 1, prim;
    cin >> n;
    n++;

    while(sw)
    {
        prim = 1;
        for(int i = 2; i*i <= n; i++)
            if(n%i == 0)
                prim = 0;
        if(prim && n > 1)
            sw = 0;
        n++;
    }

    cout << n-1;
    return 0;
}
