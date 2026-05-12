#include <iostream>
using namespace std;

int main() {
    int A1, B1;
    char A2, B2;
    cin >> A1 >> A2 >> B1 >> B2;
    int val = (A1 >= 19 && A2 == 'M') || (B1 >= 19 && B2 == 'M') ? 1 : 0;
    cout << val << endl;
    return 0;
}