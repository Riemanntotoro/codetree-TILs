#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    int res = A % 3 == 0 || A % 5 == 0 ? 1 : 0;
    cout << res << " ";
    return 0;
}