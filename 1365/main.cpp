#include <iostream>
using namespace std;

int main()
{
    int n, x[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = n-1; i > 0; i--)
        if(x[i]%2 == x[i-1]%2)
        {
            for(int j = n; j >= i; j--)
                x[j+1] = x[j];
            n++;
            x[i] = (x[i-1]+x[i])/2;
        }

    for(int i = 0; i < n; i++)
        cout << x[i] << ' ';
    return 0;
}
