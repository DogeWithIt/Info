#include <iostream>
using namespace std;

int main()
{
    int n, c, p = 1, m=0, ok=0;
    cin >> n >> c;

    while(n){
        if(n%10 != c){
            m += n%10*p;
            p *= 10;
            ok = 1;
        }
        n /= 10;
    }
    if(ok)
        cout << m;
    else
        cout << -1;

    return 0;
}
