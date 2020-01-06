#include <iostream>
using namespace std;

int x[101][101];
int main()
{
    int n, m;
    long long s = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int i = 1; i <= n; i++)
    {
        s = 0;
        for(int j = 1; j <= m; j++)
            s += x[i][j];
        cout << s << ' ';
    }
    return 0;
}
