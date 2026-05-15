#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int i = A;
    while(i <= B) {
        cout << i << " ";
        i += 2;
    }
    return 0;
}