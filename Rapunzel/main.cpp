#include <fstream>
using namespace std;
ifstream fin("rapunzel.in");
ofstream fout("rapunzel.out");

int main()
{
    long long int N;
    int M1, M2;
    fin >> N >> M1 >> M2;

    if(N % (M1+M2) != 0)
        fout << N/(M1+M2) + 1;
    else
        fout << N/(M1+M2);

    return 0;
}
