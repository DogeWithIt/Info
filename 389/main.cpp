#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, nrdiv = 0, k = 0, Min, Max, Maxdiv = 0, d2, m;
    cin >> a >> b;

    if(a%2 == 1)
        a++;
    for(int i = a; i <= b; i+=2){
        nrdiv = 0;
        d2 = 0;
        m = i;
        while(m%2 == 0)
            m = m/2, d2++;

        for(int d = 1; d*d < m; d += 2)
            if(i%d == 0)
                nrdiv += 2;
        nrdiv *= d2;
        if(sqrt(i) == floor(sqrt(i)))
            nrdiv++;

        if(nrdiv > Maxdiv)
            Maxdiv = nrdiv, Min = Max = i;
        else if(nrdiv == Maxdiv)
            Max = i;
    }

    cout << Maxdiv << ' ' << Min << ' ' << Max;
    return 0;
}
