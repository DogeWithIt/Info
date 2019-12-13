#include <fstream>
using namespace std;
ifstream fin("pietre.in");
ofstream fout("pietre.out");

int main()
{
    int t, a, b;
    fin >> t;


    for(int i = 0; i < t; i++)
    {
        fin >> a >> b;
        if(a > b)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }
        if(a == 1 && b == 2)
            fout << 2 << '\n';
        else if(a-b == 2)
    }
    return 0;
}
