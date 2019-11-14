#include <iostream>
using namespace std;

int main()
{
    int n, k, aux, s1, s2=0, a;
    cin >> k >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        s1 = 0;
        aux = a;
        while(aux){
            s1 += aux%10;
            aux /= 10;
        }
        if(s1 % k == 0)
            s2 += a;
    }

    cout << s2;
    return 0;
}
