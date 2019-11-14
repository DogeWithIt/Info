#include <iostream>
using namespace std;

int main()
{
    int R, G, B;
    cin >> R >> G >> B;

    if(R*B*G >= 0 && (R<=255 && G<=255 && B<=255)){
        if(R-G<10 && R-B<10 && B-R<10)
            cout << "GRI";
        else
            cout << "CULOARE";
    }
    else
        cout << "NU E CULOARE";

    return 0;
}
