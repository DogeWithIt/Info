#include <iostream>
using namespace std;

int main()
{
    int n, r, ult;
    cin >> n;
    int x[n];

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 0; i < n-1; i++)
    {
        ult = x[n-1];
        while(ult)
        {
            r = x[i] % ult;
            x[i] = ult;
            ult = r;
        }

        if(x[i] == 1)
        {
            cout << "NU";
            return 0;
        }
    }

    cout << "DA";
    return 0;
}
