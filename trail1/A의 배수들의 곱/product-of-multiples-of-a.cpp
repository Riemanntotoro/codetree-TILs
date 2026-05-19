#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int prod = 1;
    for (int i=A; i<=B; i++) {if (i % A == 0) {prod *= i;}}
    cout << prod << " ";
    return 0;
}