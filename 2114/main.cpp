#include <fstream>
using namespace std;
ifstream fin("vapoare.in");
ofstream fout("vapoare.out");

int main()
{
    long long int x, y, z1, z2, auxx, auxy, r;
    fin >> x >> y >> z1 >> z2;

    x = 14*x + z1, auxx = x;
    y = 14*y + z2, auxy = y;

    while(y)
    {
        r = x%y;
        x = y;
        y = r;
    }

    fout << auxx*auxy/x;
    return 0;
}
