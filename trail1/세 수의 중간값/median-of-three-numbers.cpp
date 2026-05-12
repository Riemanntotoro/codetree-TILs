#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int val = (B > A && B < C) ? 1 : 0;
    cout << val << endl;
    return 0;
}