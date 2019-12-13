#include <iostream>
using namespace std;

int main()
{
    long long int n, og = 0;
    cin >> n;
    long long int x[n];

    for(int i = 0; i < n; i++)
        cin >> x[i];

    while(x[0])
    {
        og = og*10 + x[0]%10;
        x[0] /= 10;
    }

    for(int i = 1; i < n; i++)
        if(x[i] == og)
        {
            cout << "DA";
            return 0;
        }



    cout << "NU";
    return 0;
}
