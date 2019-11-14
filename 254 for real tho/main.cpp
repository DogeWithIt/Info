#include <iostream>

using namespace std;

int main()
{
    int n, a, b, p = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        if(a > b){
            a ^= b;
            b ^= a;
            a ^= b;
        }

        while(p*2 <= b)
            p *= 2;

        if(p > a)
            cout << p << '\n';
        else
            cout << 0 << '\n';
        p = 1;
    }
    return 0;
}
