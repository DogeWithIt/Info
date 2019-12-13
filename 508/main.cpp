#include <iostream>
using namespace std;

int main()
{
    int n1, n2, x, v1[25000], st = 1, dr = 1;
    cin >> n1;

    for(int i = 1; i <= n1; i++)
        cin >> v1[i];

    cin >> n2;
    for(int i = 1; i <= n2; i++)
    {
        cin >> x;
        st = 1, dr = n1;
        while(st <= dr)
        {
            if(v1[(st+dr)/2] < x)
                st = (st+dr)/2+1;
            else
                dr = (st+dr)/2-1;
        }
        if(v1[st] == x)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
    return 0;
}
