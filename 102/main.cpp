#include <iostream>
using namespace std;

int main()
{
    int a, aux, k = 0;
    cin >> a;
    aux = a;
    if(a == 0){
        cout << 1;
        return 0;
    }

    while(a > 10){
        a /= 10;
    }

    while(aux){
        if(aux%10 == a)
            k++;
        aux /= 10;
    }

    cout << k;
    return 0;
}
