#include <iostream>
using namespace std;

int main()
{
    int n, prim = 1, k = 0, sortat = 1, x[1001], y[1001];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 0; i < n; i++)
    {
        prim = 1;
        for(int j = 2; j*j <= x[i] && prim; j++)
            if(x[i]%j == 0)
                prim = 0;
        if(prim == 1 && x[i] > 1)
            y[k] = x[i], k++;
    }


    do{
        sortat = 1;
        for(int i = 0; i < k-1; i++)
            if(y[i] > y[i+1])
            {
                y[i+1] ^= y[i];
                y[i] ^= y[i+1];
                y[i+1] ^= y[i];
                sortat = 0;
            }
    }while(!sortat);

    for(int i = 0; i < k; i++)
        cout << y[i] << ' ';
    return 0;
}
