#include <iostream>
#include <algorithm>
using namespace std;
int MinValue(int A, int B, int C) {
    return min(A, min(B, C));
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << MinValue(a, b, c);
    return 0;
}