#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], i = 0, Maxpoz, Max = 0, Minpoz, Min = 1000001, k = 0;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++){
        if(x[i] > Max)
            Maxpoz = i, Max = x[i];
        if(x[i] < Min)
            Minpoz = i, Min = x[i];
    }
    for(i = 0; i < n; i++)
        if(x[i] == Max - Min)
            k++;

    cout << k;
    return 0;
}
