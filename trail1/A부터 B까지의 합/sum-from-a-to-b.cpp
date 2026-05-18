#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ssum = 0;
    for (int i=A; i<=B; i++) {
        ssum += i;
    }
    cout << ssum << endl;
    return 0;
}