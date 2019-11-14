#include <iostream>
using namespace std;

int main()
{
    long long int n, x, k = 0, t[2];
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%2 == 1)
        {
            t[0] = t[1];
            t[1] = x;
            k++;
        }
    }
    if(k >= 2)
        cout << t[0] << ' ' << t[1];
    else
        cout << "Numere insuficiente";
    return 0;
}
