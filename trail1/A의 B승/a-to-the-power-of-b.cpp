#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int prod = 1;
    for (int i=0; i<B; i++) {
        prod *= A;
    }
    cout << prod << " ";
    return 0;
}