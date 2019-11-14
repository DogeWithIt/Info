#include <fstream>
using namespace std;
ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");

int main()
{
    int n, k = 0;
    fin >> n;
    int x[n];
    for(int i = 0; i < n; i++)
        fin >> x[i];

    for(int i = 0; i < n; i++)
        if(x[i] == x[n-1]) k++;

    fout << k;
    return 0;
}
