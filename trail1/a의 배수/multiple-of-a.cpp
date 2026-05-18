#include <iostream>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    int i = 1;
    while (i <= N) {
        if (i % A == 0) {cout << 1 << "\n";}
        else {cout << 0 << "\n";}
        i++;
    }
    return 0;
}