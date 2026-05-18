#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ssum = 0;
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        if (a % 3 == 0 && a % 2 == 1) {ssum += a;}
    }
    cout << ssum << endl;
    return 0;
}