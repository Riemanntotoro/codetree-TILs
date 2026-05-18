#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        if (a % 3 == 0 && a % 2 == 1) {cout << a << "\n";}
    }
    return 0;
}