#include <iostream>
using namespace std;

int main()
{
    int x[200], n, i = 0, r, a, b, k = 0;
    cin >> n;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n/2; i++){
        a = x[i], b = x[n-i-1];
        while(b){
            r = a%b;
            a = b;
            b = r;
        }
        if(a == 1)
            k++;
    }

    cout << k;
    return 0;
}
