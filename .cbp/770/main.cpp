#include <iostream>
using namespace std;

int x[101][101];
int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j < m; j++)
        {
            x[i][j] ^= x[i][j+1];
            x[i][j+1] ^= x[i][j];
            x[i][j] ^= x[i][j+1];
        }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cout << x[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
