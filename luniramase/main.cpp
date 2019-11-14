#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch(n){
        case 1:
            cout << "Februarie" << endl << "Martie" << endl << "Aprilie" << endl << "Mai" << endl << "Iunie" << endl << "Iulie" << endl;
            cout << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 2:
            cout << "Martie" << endl << "Aprilie" << endl << "Mai" << endl << "Iunie" << endl << "Iulie" << endl;
            cout << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 3:
            cout << "Aprilie" << endl << "Mai" << endl << "Iunie" << endl << "Iulie" << endl;
            cout << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 4:
            cout << "Mai" << endl << "Iunie" << endl << "Iulie" << endl;
            cout << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 5:
            cout << "Iunie" << endl << "Iulie" << endl;
            cout << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 6:
            cout << "Iulie" << endl << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 7:
            cout << "August" << endl << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 8:
            cout << "Septembrie" << endl << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 9:
            cout << "Octombrie" << endl << "Noiembrie" << endl << "Decembrie";
            break;
        case 10:
            cout << "Noiembrie" << endl << "Decembrie";
            break;
        case 11:
            cout << "Decembrie";
            break;
    }
    return 0;
}
