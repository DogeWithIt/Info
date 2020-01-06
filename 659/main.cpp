#include <iostream>
using namespace std;

int x[101][101];
int main()
{
    int n, m, Max = 0;
    long long s = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int i = 1; i <= n; i++)
    {
        s = 0, Max = 0;
        for(int j = 1; j <= m; j++)
        {
            s += x[i][j];

            if(x[i][j] > Max)
                Max = x[i][j];
        }

        cout << s - Max << ' ';
    }
    return 0;
}
