#include <fstream>
using namespace std;
ifstream fin("vistiernic.in");
ofstream fout("vistiernic.out");

int main()
{
    int n, f2 = 0, f5 = 0, x;
    fin >> n;

    for(int i = 1; i <= n; i++)
    {
        fin >> x;

        while(x%2 == 0)
            f2++, x /= 2;

        while(x%5 == 0)
            f5++, x /= 5;
    }

    if(f2 > f5)
        fout << f5;
    else
        fout << f2;
    return 0;
}
