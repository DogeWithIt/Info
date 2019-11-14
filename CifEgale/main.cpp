#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 111 * (n%10))
        cout << "da";

    else
        cout << "nu";


    return 0;
}

