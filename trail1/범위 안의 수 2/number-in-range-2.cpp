#include <iostream>
using namespace std;

int main() {
    int ssum = 0, cnt = 0;
    for (int i=0; i<10; i++) {
        int a;
        cin >> a;
        if (a>=0 && a<=200) {cnt++; ssum += a;}
    }
    cout << fixed;
    cout.precision(1);
    cout << ssum << " " << (double)ssum / cnt << endl;
    return 0;
}