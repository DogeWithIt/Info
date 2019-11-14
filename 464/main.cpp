#include <iostream>
using namespace std;

int main()
{
    int n, c, aux, k = 0;
    cin >> c >> n;

    while(n){
        aux = n;
        if(aux%2 == 0){
            while(aux){
            if(aux%10 == c)
                k++;
            aux /= 10;
            }
        }
        cin >> n;
    }

    cout << k;
    return 0;
}
