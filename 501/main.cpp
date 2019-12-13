#include <iostream>
using namespace std;

int main()
{
    int n, x[500];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 1; i < n; i++)
        if(x[i] != x[0])
        {
            cout << "NU";
            return 0;
        }

    cout << "DA";
    return 0;
}
