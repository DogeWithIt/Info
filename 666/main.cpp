#include <iostream>
using namespace std;

bool ciur[1000001];
int x[101][101];
int main()
{
    ciur[1] = true;
    for(int i = 2; i*i <= 1000000; i++)
        if(!ciur[i])
            for(int j = i+i; j <= 1000000; j += i)
                ciur[j] = true;

    int n, m, k = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> x[i][j];

    for(int i = 1; i <= n; i++)
        if(i%2 == 0)
            for(int j = 1; j <= m; j++)
                if(!ciur[x[i][j]])
                    k++;

    cout << k;
    return 0;
}
