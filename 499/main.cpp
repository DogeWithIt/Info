#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, s = 0, s1 = 0, a;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++)
        cin >> x[i];
    for(int i = 0; i < n - 1; i++)
    {
        s = 0;
        a = x[i];
        while(a)
        {
            s += a%10;
            a /= 10;
        }

        for(int j = i+1; j < n; j++)
        {
            s1 = 0;
            a = x[j];
            while(a)
            {
                s1 += a%10;
                a /= 10;
            }
            if(s1 == s)
                k++;
        }
    }

    cout << k;
    return 0;
}
