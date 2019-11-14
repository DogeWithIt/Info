#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], Max = 0, Min = 1000001, pozMin = 1, pozMax = 1, i = 0;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++){
        if(x[i] > Max)
            Max = x[i], pozMax = i+1;
        else if(x[i] < Min)
            Min = x[i], pozMin = i+1;
    }

    cout << pozMin << ' ' << pozMax;
    return 0;
}
