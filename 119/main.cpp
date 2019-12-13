#include <iostream>
using namespace std;

int main()
{
    int n, x[1001], sortat = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    do
    {
        sortat = 1;
        for(int i = 0; i < n-1; i++)
            if(x[i] > x[i+1])
            {
                x[i+1] ^= x[i];
                x[i] ^= x[i+1];
                x[i+1] ^= x[i];
                sortat = 0;
            }
    }while(!sortat);

    for(int i = n-1; i >= n-2; i--)
        cout << x[i] << ' ';
    return 0;
}
