#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    x = (n - m*(m-1)/2)/m;

    if(x*m + m*(m-1)/2 == n)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
