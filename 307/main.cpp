#include <iostream>
using namespace std;

int main()
{
    long long int n, x, p = 1, exp2 = 0, exp5 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        while(x%2 == 0)
            exp2++, x /= 2;
        while(x%5 == 0)
            exp5++, x /= 5;
        p = p*(x%10)%10;
    }

    if(exp2 > exp5)
    {
        exp2 -= exp5;
        if(exp2%4 == 0)
            p = p*6%10;
        else if(exp2%4 == 1)
            p = p*2%10;
        else if(exp2%4 == 2)
            p = p*4%10;
        else
            p = p*8%10;
    }
    else if(exp2 != exp5) p = 5;

    cout << p;
    return 0;
}
