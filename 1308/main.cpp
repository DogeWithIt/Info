#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b;
    n = (a%10 == b%10) +(a%10 == b/10) + (a/10 == b%10) + (a/10 == b/10);

    if(n != 0)
        cout << "da";
    else
        cout << "nu";

    return 0;
}
