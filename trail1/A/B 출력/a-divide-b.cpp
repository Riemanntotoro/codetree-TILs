#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << A / B << ".";
    int remainder = A % B;
    for (int i=0; i<20; i++) {
        remainder *= 10;
        cout << remainder / B;
        remainder %= B;
    }
    return 0;
}