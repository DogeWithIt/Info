#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cin >> n;
    c = 100;

    while(n > 0){
        cout << c;
        c++;
        n -= 3;
    }

    return 0;
}
