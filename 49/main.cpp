#include <iostream>
using namespace std;

int main()
{
    int n;
    long long int p = 1;
    cin >> n;
    if(n == 0)
    {
        cout << 1;
        return 0;
    }

    for(int i = 1; i <= n; i++)
        p *= i;

    cout << p;
    return 0;
}
