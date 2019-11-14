#include <iostream>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    if(n == 0 && m == 0){
        cout << -1;
        return 0;
    }

    while(m != 0)
    {
        int r = n % m;
        n = m;
        m = r;
    }

    cout << n;
    return 0;
}
