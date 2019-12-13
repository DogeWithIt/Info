#include <fstream>
using namespace std;
ifstream fin("unice1.in");
ofstream fout("unice1.out");

int main()
{
    int n, x[1000], y[1000], k = 0, p = 0, fl = 0;
    fin >> n;
    for(int i=0;i<n;i++)
    {
        fin>>x[i];
        fl=0;
        for(int j=i+1;j<n;j++)
            if(x[i]==x[j]) fl++;
        if(!fl)
        {
            y[k]=x[i];
            k++;
        }
    }
    fout << k;
    fout.close();
    fin.close();
    return 0;
}
