#include <fstream>
using namespace std;
ifstream fin("pc.in");
ofstream fout("pc.out");

int main()
{
    int T, x;
    fin >> T;

    while(T){
        fin >> x;
        if(x%2)
            fout << 1 << ' ';
        else
            fout << 0 << ' ';
        T--;
    }
    return 0;
}
