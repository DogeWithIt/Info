#include <iostream>
using namespace std;

int main() {
    int n, x = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << x << " ";
            x++;
            if (j == n-1)
                cout << endl;
        }
    }

    return 0;
}

