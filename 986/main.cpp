#include <iostream>
using namespace std;

int main()
{
    double x[200], a, b;
    int i = 0, n, k = 0;
    cin >> n;

    while(i < n){
        cin >> x[i];
        i++;
    }

    a = x[0], b = x[n-1];
    if(a > b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    for(i = 0; i < n; i++){
        if(x[i] < a || x[i] > b)
            k++;
    }

    cout << k;
    return 0;
}
