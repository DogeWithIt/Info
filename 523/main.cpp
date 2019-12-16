#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1, x[1000], Max = 0, st, dr;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x[i];

    for(int i = 1; i <= n; i++)
    {
        if(x[i] == x[i-1])
            k++;
        else
            k = 1;
        if(k >= Max)
            Max = k, st = i-k+1, dr = i;
    }

    cout << st << ' ' << dr;
    return 0;
}
