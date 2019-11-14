#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a, sw = 0;
    vector<int> x;
    cin >> n;

    while(n){
       cin >> a;
       x.push_back(a);
       n--;
    }

    for(int i = x.size() - 1; i >= 0; i--){
        a = x[i];
        if(a < 2);
        else{
            sw = 0;
            for(int d = 2; d*d <= a; d++)
                if(a%d == 0)
                    sw = 1;
            if(!sw) cout << a << ' ';
        }
    }

    return 0;
}
