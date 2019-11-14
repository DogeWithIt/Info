#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, i = 0, n, n2, j, p = 1, r;
    cin >> n;
    n2 = n;

    while(n){
        n /= 10;
        i++;
    }

    n = n2;

    for(j=1;j<=i/2;j++) {
        b += p * (n%10);
        p *= 10;
        n /= 10;
    }

    if(i%2)
        n /= 10;

    a = n;

    while(b){
        r = a % b;
        a = b;
        b = r;
    }

    cout << a;
    return 0;
}
