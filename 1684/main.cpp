#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << i*(i+1)*(2*i+1)/6 << ' ';
    }

    return 0;
}
