#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x;
    y = x;

    for(int i = 1; i < n; i++)
    {
        cin >> x;
        if(y !=0 && x != 0)
        {
            cout << "NU";
            return 0;
        }
    }

    cout << "DA";
    return 0;
}
