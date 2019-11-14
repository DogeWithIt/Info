#include <iostream>
using namespace std;

int main() {
    long long int a, b, n=1;
    cin >> a >> b;

    for (int i=0; i < b; i++){
        n *= a;
    }
    cout << n;
    return 0;
}

