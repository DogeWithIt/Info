#include <iostream>
using namespace std;

int main()
{
    int n, aux, k = 0, s = 0;
    cin >> n; aux = n;

    while(n){
        k++;
        n /= 10;
    }

    while(aux){
        if(k%2 != 0)
            s += aux%10;
        aux /= 10;
        k--;
    }

    cout << s;
    return 0;
}
