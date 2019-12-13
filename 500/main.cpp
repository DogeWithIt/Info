#include <iostream>
using namespace std;

int main()
{
    int n, x[500];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 0; i < n-1; i++)
        if(x[i] > x[i+1])
        {
            cout << "NU";
            return 0;
        }

    cout << "DA";
    return 0;
}
