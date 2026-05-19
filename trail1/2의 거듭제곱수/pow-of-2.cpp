#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    while (N > 2) {
        N /= 2;
        cnt++;
    }
    cout << cnt + 1 << " ";
    return 0;
}