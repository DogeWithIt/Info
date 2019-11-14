#include <iostream>
using namespace std;

int main()
{
    int p;
    long long int k;
    cin >> p >> k;

    if(k % 2 != 0)
        cout << p + k/2*30;
    else
        cout << p + (k-1)/2*20 + k/2 * 10;

    return 0;
}
