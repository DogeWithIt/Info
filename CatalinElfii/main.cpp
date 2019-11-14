#include <fstream>
using namespace std;
ifstream fin("elfii.in");
ofstream fout("elfii.out");

int main()
{
    int x, y, z, x2, y2, z2, transformari = 0;
    fin >> x >> y >> z;

    if (z % 2 == 0 && z != 0){
        transformari += 2;
    }
    if (x % 2 == 0 && x != 0){
        transformari += 2;
    }

    if (y % 2 == 0 && y != 0){
        transformari += 2;
    }
    if (transformari == 0){
       fout << "Poate data viitoare!";
    }

    if (y > x)
    {
        x2 = x;
        x = y;
        y = x2;
    }
    if (z > y)
    {
        y2 = y;
        y = z;
        z = y2;
    }
    if (y > x)
    {
        x2 = x;
        x = y;
        y = x2;
    }

    if (transformari != 0){
       fout << transformari << endl << x*100 + y*10 + z;
    }


    return 0;
}
