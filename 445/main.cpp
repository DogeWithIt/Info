#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, d = 0;
    cin >> n;

    for(int i = 1; i*i <= n; i++)
        if(n%i == 0)
           d += i + n/i;
    d -= sqrt(n)*(sqrt(n) == floor(sqrt(n)));

    if(d%n == 0)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
