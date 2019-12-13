#include <iostream>
using namespace std;

int main()
{
    int s = 0, n, p = 1;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        s += p*i*(i+1);
        p *= -1;
    }

    cout << "Rezultatul este " << s;
    return 0;
}
