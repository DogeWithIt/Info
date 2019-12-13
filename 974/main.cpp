#include <iostream>
using namespace std;

int main()
{
    int n, k, x, y;
    long long s = 0;
    cin>>n>>k;
    x = k*(k-1)/2;
    y = n%k;
    y = (y+1)*y/2;
    n = n/k;
    s = n*x+y;

    cout<<s;
    return 0;
}
