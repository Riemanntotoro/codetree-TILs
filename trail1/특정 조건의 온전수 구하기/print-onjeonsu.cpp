#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        if (i % 2 == 0) continue;
        if (i % 10 == 5) continue;
        if (i % 3 == 0 && i % 9 != 0) continue;
        cout << i << " ";
    }
    return 0;
}