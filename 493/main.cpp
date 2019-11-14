#include <iostream>
using namespace std;

int main()
{
    int x[200], n, i = 0, s = 0, aux;
    cin >> n;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++){
        aux = x[i], s = 0;
        while(aux){
            s += aux%10;
            aux /= 10;
        }
        cout << x[i] % s << ' ';
    }
    return 0;
}
