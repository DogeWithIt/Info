#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, k = 0, og = 0, aux;
    cin >> a >> b;
    a = ceil(sqrt(a)), b = floor(sqrt(b));

    for(a; a <= b; a++)
    {
        og = 0;
        aux = a*a;
        while(aux)
            og = og*10 + aux%10, aux /= 10;
        if(sqrt(og) == floor(sqrt(og)))
            k++;
    }

    cout << k;
    return 0;
}
