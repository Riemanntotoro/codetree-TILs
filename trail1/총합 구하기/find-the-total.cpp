#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ssum = 0;
    for (int i=A; i<=B; i++) {
        if (i % 6 == 0 && i % 8 != 0) {ssum += i;}
    }
    cout << ssum << " ";
    return 0;
}