#include <iostream>
using namespace std;

int main()
{
    int n, x, k = 0;
    cin >> n;

    for(int i = 0 ; i < n; i++)
    {
        cin >> x;
        if(x%2 == 0)
            k++;
    }

    if(k == n)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
