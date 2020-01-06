#include <iostream>
using namespace std;

int x[101][101];
int main()
{
    int n, m, k = 0, k2 = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int i = 1; i <= n; i++)
    {
        k = 0;
        for(int j = 1; j <= m; j++)
            if(x[i][1] == x[i][j])
                k++;

        if(k == m)
            k2++;
    }

    cout << k2;
    return 0;
}
