#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int cnt = 0, ssum = 0;
    for (int i=A; i<=B; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            ssum += i;
            cnt += 1;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << ssum << " " << (double)ssum/cnt << endl; 
    return 0;
}