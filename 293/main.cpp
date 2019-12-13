#include <iostream>
using namespace std;

int main()
{
    long long int n, aux, x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        aux = x%10;
        while(x)
        {
            x /= 10;
            if(x%10 == aux)
            {
                cout << "NU";
                return 0;
            }
            aux = x%10;
        }
    }

    cout << "DA";
    return 0;
}
