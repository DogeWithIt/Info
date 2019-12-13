#include <iostream>
using namespace std;

int main()
{
    int x, aux, k = 0;
    cin >> x;
    if(x < 0)
        x = -x;
    while(x)
    {
        aux = x;
        cin >> x;
        if(x < 0)
            x = -x;
        if(aux%10 == x%10 && x != 0)
            k++;
    }

    cout << k;
    return 0;
}
