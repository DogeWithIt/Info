#include <iostream>
using namespace std;

bool harta[5000][5000];
int main()
{
    int n, m, k, p, x, y, cnt = 0;
    cin >> n >> m >> k;

    for(int i = 1; i <= k; i++)
    {
        cin >> x >> y >> p;
        harta[x][y] = true;

        for(int j = 1; j < p; j++)
        {
            harta[x+j][y+j] = true;
            if(x-j > 0)
            {
                harta[x-j][y+j] = true;
                if(y-j > 0)
                    harta[x-j][y-j] = true;
            }
            if(y-j > 0)
                harta[x+j][y-j] = true;
        }
    }

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(harta[i][j])
                cnt++;

    cout << n*m - cnt;
    return 0;
}
