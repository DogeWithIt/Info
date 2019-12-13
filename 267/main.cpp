#include <fstream>
using namespace std;
ifstream fin("unice.in");
ofstream fout("unice.out");

int v[101];
int main()
{
    int n, x;
    fin >> n;

    for(int i = 0; i < n; i++)
        fin >> x, v[x]++;

    for(int i = 0; i <= 100; i++)
        if(v[i] == 1)
            fout << i << ' ';
    return 0;
}
