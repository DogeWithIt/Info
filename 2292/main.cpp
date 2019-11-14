#include <fstream>
#include <vector>
using namespace std;
ifstream fin("nevricos.in");
ofstream fout("nevricos.out");

int main()
{
    long long int s, k1 = 0, k2 = 0, nr;
    vector<int> cif;
    fin >> s;

    while(s){
        cif.push_back(s%10);
        s /= 10;
    }

    for(int i = cif.size()-1; i >= 0; i--){
        nr = i - 1;
        if(cif[i] == 1){
            while(nr>=0){
                if(cif[nr] == 5){
                    k1 += 1 * (nr + 1 == i);
                    k2++;
                }
                nr--;
            }
        }
        else if(cif[i] == 2){
            while(nr>=0){
                if(cif[nr] == 4){
                    k1 += 1 * (nr + 1 == i);
                    k2++;
                }
                nr--;
            }
        }
    }

    fout << k1 << '\n' << k2;
    return 0;
}
