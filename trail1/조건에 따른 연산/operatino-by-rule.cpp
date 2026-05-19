#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    while (N < 1000) {
        if (N % 2 == 0) {N = N * 3 + 1;}
        else {N = N * 2 + 2;}
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}