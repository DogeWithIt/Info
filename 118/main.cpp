#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n > 100)
        n /= 10;

    cout << n%10 + n/10%10;
    return 0;
}
