#include <iostream>
using namespace std;

int main()
{
    int sw = 0, x, n, aux;
    cin >> n >> x;
    aux = x;

    if(n < 3)
    {
        cout << "DA";
        return 0;
    }

    for(int i = 0; i < n-2; i++)
    {
        cin >> x;
        if(aux < x)
        {
            if(sw == 1 && i)
            {
                cout << "NU";
                return 0;
            }
            sw = 1;
        }
        else if(aux > x)
        {
            if(sw == 0 && i)
            {
                cout << "NU";
                return 0;
            }
            sw = 0;
        }
        else
        {
            cout << "NU";
            return 0;
        }
        aux = x;
    }

    cout << "DA";
    return 0;
}
