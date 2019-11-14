#include <iostream>
using namespace std;

int main()
{
    int n, x, aux, Max = 0, maxNr = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        aux = x;

        while(x > 9)
            x /= 10;
        if(x > Max){
            Max = x;
            maxNr = aux;
        }
        else if(x == Max)
            if(aux > maxNr)
                maxNr = aux;
    }

    cout << maxNr;
    return 0;
}
