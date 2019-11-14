#include <iostream>
using namespace std;

int main()
{
    long long n, s = 0, p = 1, k = 0, aux, bux;
    cin >> n;
    aux = n;

    while(n){
        k++;
        n /= 10;
    }
    n = aux;
    bux = k;

    while(k > bux/2 + 1){
        s += p * (n%10);
        p *= 10;
        n /= 10;
        k--;
    }

    n = n/10;
    n = n*p + s;
    cout << n;
    return 0;
}
