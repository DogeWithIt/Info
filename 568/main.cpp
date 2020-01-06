#include <iostream>
using namespace std;

int x[1001][1001];
int main()
{
    int n, m, Min = 10001;
    long long sum = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int j = 1; j <= m; j++)
    {
        Min = 10001;
        for(int i = 1; i <= n; i++)
            if(x[i][j] < Min)
                Min = x[i][j];
        sum += Min;
    }

    cout << sum;
    return 0;
}
