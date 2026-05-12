#include <iostream>
using namespace std;

int main() {
    int Am, Ae, Bm, Be;
    cin >> Am >> Ae >> Bm >> Be;
    if (Am == Bm && Ae > Be) {cout << "A" << endl;}
    else if (Am == Bm && Ae < Be) {cout << "B" << endl;}
    else if (Am > Bm) {cout << "A" << endl;}
    else {cout << "B" << endl;}
    return 0;
}