#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");

int main()
{
    int n, d, a, b;
    fin >> d >> a >> b >> n;

    d += (n/2)*(a-b);
    if(n%2)
        d += a;

    fout << d;
    return 0;
}
