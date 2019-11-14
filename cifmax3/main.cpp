#include <iostream>
using namespace std;

int main()
{
    int n, Max;
    cin >> n;
    Max = n/100;

    if(n%10 > Max)
        Max = n%10;
    if(n/10%10 > Max)
        Max = n/10%10;

    cout << Max;
    return 0;
}
