#include <iostream>
using namespace std;


int main(){
    int u, p, s = 0;

    while(u != p){
        p = u;
        cin >> u;
        s += u;
    }

    cout << s;
    return 0;
}
