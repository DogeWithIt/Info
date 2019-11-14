#include <iostream>
using namespace std;

int main()
{
    int n, m, aux;
    cin >> n >> m;

    while(m){
        aux = n;
        while(aux){
            if(aux%10 == m%10){
                cout << "DA";
                return 0;
            }
            aux /= 10;
        }
        m /= 10;
        n /= 10;
    }

    cout << "NU";
    return 0;
}
