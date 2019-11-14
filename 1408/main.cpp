#include <iostream>
using namespace std;

int main()
{
    int n, Max, Min, x, sw = 1, k = 0;
    cin >> n;
    Max = 0, Min = 1000000001;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        sw = 1;
        for(int d = 2; d*d <= x; d++)
            if(x%d == 0)
                sw = 0;
        if(sw && (x >= 2))
        {
            if(x > Max) Max = x;
            if(x < Min) Min = x;
            k++;
        }
    }

    cout << k << ' ' << Min << ' ' << Max;
    return 0;
}
