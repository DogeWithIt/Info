#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;
    cout << ((n*(n+1)*(2*n+1))/6) % 10234573;
    return 0;
}
