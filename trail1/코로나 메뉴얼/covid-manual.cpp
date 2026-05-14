#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for (int i=0; i<3; i++) {
        char flu;
        int T;
        cin >> flu >> T;
        if (flu == 'Y' && T >= 37) {cnt++;}
    }
    if (cnt >= 2) {cout << "E" << endl;}
    else {cout << "N" << endl;}
    return 0;
}