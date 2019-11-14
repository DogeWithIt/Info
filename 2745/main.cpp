#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t, p, a;
    long long s = 0;
    cin >> n >> t >> p;

    if(t == 1){
        int Min = 1000000000, sc = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            s += a;
            if(a < Min && i < p)
                Min = a;
        }
        while(Min){
            sc += Min%10;
            Min /= 10;
        }
        cout << sc << '\n' << s;
    }

    if(t == 2){
        int Max = 0, d = 0;
        for(int i = 0; i < n; i++){
            cin >> a;
            s += a;
            if(a > Max && i < p)
                Max = a;
        }
        for(int j = 1; j*j <= Max; j++){
            if(Max%j==0)
                d += 2;
        }
        d -= (sqrt(Max) == floor(sqrt(Max)));
        cout << d << '\n' << s;
    }

    return 0;
}
