#include <iostream>
using namespace std;

int main()
{
    int k, l;
    cin >> k;

    if(k%3 == 1)
        cout << k/3+1 << " " << k/3+1;
    else if (k%3 == 0)
        cout << k/3 << " " << k/3+1;
    else if (k%3 == 2)
        cout << k/3+2 << " " << k/3+1;

    return 0;
}
