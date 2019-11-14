#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("elempp.in");
ofstream fout("elempp.out");

int main()
{
    int n, x, aux;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        aux = x;
        while(x > 99)
            x /= 10;
        if(sqrt(x) == floor(sqrt(x)))
            fout << aux << ' ';
    }

    return 0;
}
