#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], r, b, k = 0;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++)
    {
        b = v[n-1];
        while(b)
        {
            r = v[i] % b;
            v[i] = b;
            b = r;
        }
        if(v[i] == 1)
            k++;
    }

    cout << k;
    return 0;
}
