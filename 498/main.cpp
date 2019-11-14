#include <iostream>
using namespace std;

int main()
{
    int n, a, b, r, k = 0;
    cin >> n;
    int v[n], i = 0;
    while(i < n)
    {
        cin >> v[i];
        i++;
    }

    for(i = 0; i < n; i++)
    {
        if(i == n-1)
            break;
        for(int j = i+1; j < n; j++)
        {
            b = v[j];
            a = v[i];
            while(b)
            {
                r = a % b;
                a = b;
                b = r;
            }
            if(a == 1)
                k++;
        }
    }

    cout << k;
    return 0;
}
