#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    while (true) {
        int N;
        cin >> N;
        if (N % 2 == 1) continue;
        cout << N / 2 << endl;
        cnt++;
        if (cnt == 3) break;
    }
    return 0;
}