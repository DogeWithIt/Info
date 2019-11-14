#include <fstream>
using namespace std;
ifstream fin("zmeu.in");
ofstream fout("zmeu.out");

int main()
{
    unsigned long long n, z, m2;
    unsigned m;
    fin >> n >> m;
    z = n / (m*2);
    m2 = (m*2) - n%(m*2);

    fout << z << endl << m2;

    fin.close();
    fout.close();
    return 0;
}
