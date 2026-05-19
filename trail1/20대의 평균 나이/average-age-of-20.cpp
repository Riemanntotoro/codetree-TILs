#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);
    int cnt = 0;
    int ssum = 0;
    while(true) {
        int n;
        cin >> n;
        if (n >= 30 || n < 20) {cout << (double)ssum / cnt; break;}
        ssum += n;
        cnt += 1;
    }
    return 0;
}