#include <iostream>
using namespace std;

int main()
{
    int n, x[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
        {
            cin >> x[i];
            cout << x[i];
        }

    for(int i = 0; i < n/2; i++)
        if(x[i] != x[n-i-1])
        {
            cout << '\n' <<"NU";
            return 0;
        }


    cout << '\n' << "DA";

    return 0;
}
