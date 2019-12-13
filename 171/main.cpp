#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Mincif, Min, x[n], aux;

    cin >> x[0];
    Min = x[0];
    while(x[0] > 9)
        x[0] /= 10;
    Mincif = x[0];

    for(int i = 1; i < n; i++)
    {
        cin >> x[i];
        aux = x[i];
        while(x[i] > 9)
            x[i] /= 10;

        if(x[i] < Mincif)
            Mincif = x[i], Min = aux;

        else if(x[i] == Mincif)
            if(aux > Min)
                Min = aux;
    }

    cout << Min;
    return 0;
}
