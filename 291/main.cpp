#include <iostream>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        k = 0;
        while(a)
            k++, a /= 10;
        if(k%2 != 0)
        {
            cout << "NU";
            return 0;
        }
    }

    cout << "DA";
    return 0;
}
