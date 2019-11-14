#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if(n % k > k/2)
        cout << n + k - n%k;
    else
        cout << n - n%k;

    return 0;
}
