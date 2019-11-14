#include <iostream>
using namespace std;

int main()
{
    int n, p, k = 0, aux;
    cin >> n >> p;
    aux = n;

    while(n <= p){
        if(k == 0){
            cout << 1 << ' ';
            k++;
        }
        else{
            cout << n << ' ';
            n *= aux;
        }
    }
    return 0;
}
