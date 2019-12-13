#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0, n;
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++)
        if(n%i == 0)
            a +=(i%2==0) + (n/i%2==0);

    if(sqrt(n) == floor(sqrt(n)))
        a--;

    cout << a;
    return 0;
}
