#include <iostream>
using namespace std;

int main()
{
    int x[100], y[100], n, m, k1 = 0, k2 = 0, i = 0;
    cin >> n;
    while(i < n){
        cin >> x[i];
        i++;
    }
    i = 0;
    cin >> m;
    while(i < m){
        cin >> y[i];
        i++;
    }

    for(int i = 0; i < n; i++){
        k1 = 0;
        for(int j = 0; j < m; j++)
            if(x[i] > y[j])
                k1++;
        if(k1 == m)
            k2++;
    }

    cout << k2;
    return 0;
}
