#include <iostream>
using namespace std;

int main()
{
    int n, n1, a, aux, k = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> n1;
        k = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(i != 0){
                if(a > aux)
                    k = 1;
                else
                    k = 0;
            }
            aux = a;
        }
        cout << k << ' ';
    }
    return 0;
}
