#include <iostream>
using namespace std;

int x[101][101], s[101];
int main()
{
    int n, m, sum = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int i = 1; i <= n; i++)
    {
        sum = 0;
        for(int j = 1; j <= m; j++)
            sum += x[i][j];
        s[i] = sum;
    }

    for(int i = 1; i < n; i++)
        for(int j = i+1; j <= n; j++)
            if(s[i] > s[j])
            {
                s[i] ^= s[j];
                s[j] ^= s[i];
                s[i] ^= s[j];

                for(int k = 1; k <= m; k++)
                {
                    x[i][k] ^= x[j][k];
                    x[j][k] ^= x[i][k];
                    x[i][k] ^= x[j][k];
                }
            }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cout << x[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
