#include <iostream>
using namespace std;

int main()
{
    int n, aux, k=0;
    cin >> n;
    aux = n%10;

    if(n == 0){
        cout << 1;
        return 0;
    }

    while(n){
        if(n%10 == aux)
            k++;
        n /= 10;
    }
    cout << k;
    return 0;
}
