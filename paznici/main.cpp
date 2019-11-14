#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v, d;
    int t;
    cin >> v >> d;
    v = v*1000.0/60.0;
    t = ceil(d / v);

    cout << t;
    return 0;
}

