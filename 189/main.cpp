#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        int sw = 1, y = x%10, sw2 = 1, k = 0, k2 = 0;
        x /= 10;
        if(y > x%10)
            sw = 1;
        else
        while(x){
            if(!sw2)
                k2++;
            if(x%10 > y && sw2)
                k++;
            else if(x%10 < y){
                if(k2 == 0)
                    k2++;
                sw2 = 0;
            }
            else
                sw = 0;
            y = x%10;
            x /= 10;
        }
        if(sw && k && k2)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }


    return 0;
}
