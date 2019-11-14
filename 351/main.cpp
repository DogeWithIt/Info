#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cin >> n;

    for(int i = 1; i <= n; i++){
        while(k <= i){
            cout << k << " ";
            if(k == i)
                cout << '\n';
            k++;
        }
        k = 1;
    }
    return 0;
}
