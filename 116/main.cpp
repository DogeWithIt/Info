#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, x, sw = 1, s2;
    float s = 0.0, k = 0.0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        sw = 1;
        for(int j = 2; j*j <= x && sw; j++)
            if(x%j == 0)
                sw = 0;
        if(sw && x > 1)
            s += x, k++;
    }
    s = s/k*100.0;
    s2 = s;
    s = s2;

    cout << fixed << setprecision(2) << s/100;
    return 0;
}
