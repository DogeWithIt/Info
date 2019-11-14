#include <iostream>
using namespace std;

int main()
{
    int n, m, k = 0;
    cin >> n >> m;

    while(m > 1){
        m /= n;
        k++;
    }

    cout << k;
    return 0;
}
