#include <iostream>
using namespace std;

int main()
{
    int n, x[26], m, p;
    cin >> n >> m >> p;

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = n - 1; i >= p-1; i--)
        x[i+1] = x[i];
    x[p-1] = m;
    n++;

    for(int i = 0; i < n; i++)
        cout << x[i] << ' ';
    return 0;
}
