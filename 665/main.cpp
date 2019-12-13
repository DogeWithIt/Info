#include <iostream>
using namespace std;

int main()
{
    int a, b, sw = 1, k = 0, aux;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
    {
        sw = 1, aux = i;
        while(aux && sw)
        {
            if(aux%10)
                if(i%(aux%10) != 0)
                    sw = 0;
            aux /= 10;
        }
        if(sw)
            k++;
    }

    cout << k;
    return 0;
}
