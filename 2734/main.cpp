#include <iostream>
using namespace std;

int main()
{
    int n, x[1000];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = n-1; i > 0; i--)
        for(int j = i-1; j >= 0; j--)
            if(x[j] == x[i])
            {
                for(int k = i; k < n; k++)
                    x[k] = x[k+1];
                n--;
            }

    for(int i = 0; i < n; i++)
        cout << x[i] << ' ';
    return 0;
}
