#include <iostream>
using namespace std;

int main()
{
    int x[200], n, i = 0, s = 0;
    cin >> n;
    while(i < n){
        cin >> x[i];
        i++;
    }

    for(i = 0; i < n; i++){
        s = 0;
        for(int j = 0; j < n; j++){
            s += x[j];
        }
        s -= x[i];
        cout << s << ' ';
    }
    return 0;
}
