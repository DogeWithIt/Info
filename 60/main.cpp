#include <iostream>
using namespace std;

int main()
{
    int m, n, r;
    cin >> n >> m;

    while(m){
        r = n % m;
        n = m;
        m = r;
    }

    if(n == 1)
        cout << "PIE";
    else
        cout << "NOPIE";

    return 0;
}

