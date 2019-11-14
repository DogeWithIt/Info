#include <iostream>
using namespace std;

int main()
{
    long long int n, s = 0, k = 0, aux;
    cin >> n;
    while(n){
        s += n%10;
        n /= 10;
    }
    aux = s;
    while(aux){
        k++;
        aux /= 10;
    }
    aux = s;
    cout << aux;
    for(int i = 1; i+k <= s; i++){
        cout << "0";
    }
    return 0;
}
