#include <iostream>
using namespace std;

int main()
{
    int n, f = 2, Maxf, x;
    long long int s = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        f = 2, Maxf = 2;
        while(x != 1)
        {
            if(f*f > x)
                f = x;

            if(!(x%f))
                Maxf = f;

            while(!(x%f))
                x /= f;

            if(f == 2)
                f++;
            else
                f += 2;
        }
        s += Maxf;
    }

    cout << s;
    return 0;
}
