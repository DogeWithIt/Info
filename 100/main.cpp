#include <fstream>
using namespace std;
ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");

int main()
{
    int n, x, sw = 0, k = 0;
    fin >> n;

    for(int i = 0; i < n; i++)
    {
        sw = 0;
        fin >> x;
        if(x >= 2)
        {
            for(int d = 2; d*d <= x; d++)
                if(x%d == 0)
                    sw = 1;
            if(!sw)
            k++;
        }
    }

    fout << k;
    return 0;
}
