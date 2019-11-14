#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, Max = 0, Min = 100001, Maxpoz, Minpoz;
    cin >> n;
    int x[n];
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++){
        if(x[i] > Max)
            Max = x[i], Maxpoz = i;
        if(x[i] < Min)
            Min = x[i], Minpoz = i;
    }

    if(Minpoz > Maxpoz){
        Minpoz ^= Maxpoz;
        Maxpoz ^= Minpoz;
        Minpoz ^= Maxpoz;
    }
    for(i = Minpoz; i <= Maxpoz; i++){
        cout << x[i] << ' ';
    }
    return 0;
}
