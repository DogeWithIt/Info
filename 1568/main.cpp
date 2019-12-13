#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n, k = 0, ma;
    double s = 0.0, s2;
    cin >> n;

    for(int i = 1; i*i <= n; i++)
        if(n%i == 0)
            s += n/i + i, k += 2;

    if(sqrt(n) == floor(sqrt(n)))
        s -= sqrt(n), k--;

    cout << fixed << setprecision(2) << float(s/k);
    return 0;
}
