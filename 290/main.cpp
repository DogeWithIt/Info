#include <iostream>
using namespace std;

int main()
{
    int n, aux, k = 0;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        if(x[i]%2 == 0 && k == 0)
        {
            aux = x[i];
            k++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(x[i]%2 == 0 && x[i] < aux)
        {
            cout << "NU";
            return 0;
        }
        if(x[i]%2 == 0)
            aux = x[i];
    }

    cout << "DA";
    return 0;
}
