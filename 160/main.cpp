#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x[50];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = n-1; i >= 0; i--)
        if(sqrt(x[i]) == floor(sqrt(x[i])))
        {
            for(int j = n-1; j >= i; j--)
                x[j+1] = x[j];
            n++;
            x[i] = sqrt(x[i]);
        }

    for(int i = 0; i < n; i++)
        cout << x[i] << ' ';
    return 0;
}
