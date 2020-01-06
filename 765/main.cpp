#include <iostream>
using namespace std;

int x[1005][1005];
int main()
{
    int n, m, k, is, js, id, jd, Max = 0;
    cin >> n >> m >> k;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin >> x[i][j];
            x[i][j] += x[i-1][j] + x[i][j-1] - x[i-1][j-1];
        }

    for(int i = 1; i <= k; i++)
    {
        cin >> is >> js >> id >> jd;

        if(x[id][jd] - x[is-1][jd] - x[id][js-1] + x[is-1][js-1] > Max)
            Max = x[id][jd] - x[is-1][jd] - x[id][js-1] + x[is-1][js-1];
    }

    cout << Max;
    return 0;
}
