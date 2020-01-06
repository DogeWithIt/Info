#include <fstream>
using namespace std;
ifstream fin("matd3.in");
ofstream fout("matd3.out");

int x[305][305];
int main()
{
    int l, c, xs, ys, xd, yd, k = 0;
    fin >> l >> c;

    for(int i = 1; i <= l; i++)
        for(int j = 1; j <= c; j++)
        {
            fin >> x[i][j];
            x[i][j] += x[i-1][j] + x[i][j-1] - x[i-1][j-1];
        }

    for(int j = 1; i <= c; i++)
    {
        //neterminat, o fac eu mai tarziu
    }
    return 0;
}
