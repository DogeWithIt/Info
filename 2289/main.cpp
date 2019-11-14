#include <iostream>
using namespace std;

int main()
{
    int n, m, p=1, aux1, aux2, nr1=0, nr2=0;
    cin >> n >> m;
    aux1 = n; aux2 = m;

    while(n){
        if(n%2 == aux1%2){
            nr1 += p*(n%10);
            p *= 10;
        }
        n /= 10;
    }
    p = 1;
    while(m){
        if(m%2 == aux2%2){
            nr2 += p*(m%10);
            p *= 10;
        }
        m /= 10;
    }

    if(nr1 != nr2)
        cout << aux1*(nr1>nr2) + aux2*(nr2>=nr1);
    else
        cout << aux1*(aux1>aux2) + aux2*(aux2>=aux1);

    return 0;
}
