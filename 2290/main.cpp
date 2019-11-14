#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, dif, Min = 1000000001, Minnr, aux, og = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        og = 0;
        aux = x;
        while(x){
            og = og*10 + x%10;
            x /= 10;
        }
        dif = abs(aux - og);
        if(dif < Min){
            Min = dif;
            Minnr = aux;
        }
        else if(dif == Min && aux < Minnr)
            Minnr = aux;
    }

    cout << Minnr;
    return 0;
}
