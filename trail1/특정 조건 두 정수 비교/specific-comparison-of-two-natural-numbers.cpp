#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int val1 = A < B ? 1 : 0;
    int val2 = A == B ? 1 : 0;
    cout << val1 << " " << val2 << " ";
    return 0;
}