#include <iostream>
using namespace std;

int main()
{
    int n, a, aux, b;
    cin >> n >> a;

    for (int i = 2; i <= n; i++){
        cin >> b;
        aux = b;
        while(b > 9)
            b /= 10;

        if(a%10 == b)
            cout << a << " " << aux << '\n';

        a = aux;
    }

    return 0;
}
