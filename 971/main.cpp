#include <iostream>
using namespace std;

bool ciur[10001];
int main()
{
    int n, x, f = 2, p = 0, nrdiv = 1, aux, s = 0;
    cin >> n;

    ciur[1] = true;
    for(int i = 2; i*i <= 10001; i++)
        if(!ciur[i])
            for(int j = i+i; j <= 10001; j += i)
                ciur[j] = true;

    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        f = 2, p = 0, nrdiv = 1;
        aux = x;

        if(ciur[x])
        {
            while(x != 1)
            {
                p = 0;
                if(f*f > x)
                    f = x;

                while(x%f == 0)
                    p++, x /= f;
                if(p)
                    nrdiv *= (p+1);

                if(f != 2)
                    f += 2;
                else
                    f++;
            }

            if(nrdiv%2 != 0)
                s += 3*aux;
            else
                s += aux;
        }
    }

    cout << s;
    return 0;
}
