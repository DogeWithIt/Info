#include <iostream>
using namespace std;

int main()
{
    int n, x, f = 2, s = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        f = 2;
        while(x != 1)
        {
            if(f*f > x)
                {
                    f = x;
                    break;
                }
            if(x%f == 0)
                break;
            if(f == 2)
                f++;
            else
                f += 2;
        }
        s += f;
    }

    cout << s;
    return 0;
}
