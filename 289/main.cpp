#include <iostream>
using namespace std;

int main()
{
    int n, x[100];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 0; i < n; i++)
        if(x[i]%2 != 0)
        {
            cout << "DA";
            return 0;
        }

    cout << "NU";
    return 0;
}
