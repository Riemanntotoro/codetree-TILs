#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int val = 0;
    for (int i=1; i<=N; i++) {
        val += i;
    }
    cout << val / 10 << endl;
    return 0;
}