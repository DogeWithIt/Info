#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, k = 0, x[200];
    float s = 0;
    cin >> n;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++){
        s += x[i];
    }
    s /= n;

    for(i = 0; i < n; i++){
        if(x[i] > s)
            k++;
    }

    cout << k;
    return 0;
}
