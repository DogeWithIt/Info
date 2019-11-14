#include <iostream>
using namespace std;

int main()
{
    int n, m, p1 = 1, p2 = 1, k = 0;
    long long int aux, bux, og1 = 0, og2 = 0;
    cin >> n >> m;

    while(n){
        aux = n, bux = m;
        og1 = 0, og2 = 0;
        p1 = 1, p2 = 1;
        while(aux){
            aux /= 10;
            p1 *= 10;
        }
        while(bux){
            bux /= 10;
            p2 *= 10;
        }
        aux = n*p2 + m;
        bux = m*p1 + n;
        n = aux;
        m = bux;
        while(bux){
            og2 = og2*10 + bux%10;
            bux /= 10;
        }
        while(aux){
            og1 = og1*10 + aux%10;
            aux /= 10;
        }
        if(n == og1 || m == og2)
            k++;
        cin >> n >> m;
    }

    cout << k;
    return 0;
}
