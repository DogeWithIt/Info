#include <fstream>
using namespace std;
ifstream fin("tort.in");
ofstream fout("tort.out");

int main()
{
    long long int m, n, r = 1, aux, bux;
    fin >> m >> n;
    aux = m, bux = n;

    while(m)
    {
        r = n % m;
        n = m;
        m = r;
    }

    fout << aux*bux/(n*n) << ' ' << n;
    return 0;
}
