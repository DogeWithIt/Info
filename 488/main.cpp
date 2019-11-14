#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], i = 0;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++)
        if((i+1)%2 == 0)
            cout << x[i] << ' ';
    cout << '\n';
    for(i = n-1; i >= 0; i--)
        if((i+1)%2 != 0)
            cout << x[i] << ' ';

    return 0;
}
