#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int val = a>b ? a : b;
    cout << val << "\n";
    return 0;
}