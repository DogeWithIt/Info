#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];

    for(int i = 0 ; i < n; i++)
        cin >> x[i];
    if(x[0] > x[n-1])
    {
        x[0] ^= x[n-1];
        x[n-1] ^= x[0];
        x[0] ^= x[n-1];
    }

    for(int i = 1; i < n-1; i++)
        if(!(x[i] >= x[0] && x[i] <= x[n-1]))
        {
            cout << "NU";
            return 0;
        }

    cout << "DA";
    return 0;
}
