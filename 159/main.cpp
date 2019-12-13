#include <iostream>
using namespace std;

int main()
{
    int n, x[52];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = n-1; i >= 0; i--)
    {
        if(x[i]%2 == 0)
        {
            for(int j = n-1; j >= i+1; j--)
                x[j+1] = x[j];
            n++;
            x[i+1] = 2*x[i];
        }
    }

    for(int i = 0; i < n; i++)
        cout << x[i] << ' ';
    return 0;
}
