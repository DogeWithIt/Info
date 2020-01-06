#include <iostream>
using namespace std;

int v[1000001];
int main()
{
    int n, m, x, Max = 0, Maxpoz;
    cin >> n >> m;

    for(int i = 1; i <= n*m; i++)
    {
        cin >> x;
        v[x]++;
    }

    for(int i = 1; i <= 1000001; i++)
        if(v[i] >= Max)
            Max = v[i], Maxpoz = i;

    cout << Maxpoz;
    return 0;
}
