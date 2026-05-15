#include <iostream>
using namespace std;

int main() {
    int B, A;
    cin >> B >> A;
    int i = B;
    while (i >= A) {
        cout << i << " ";
        i -= 2;
    }
    return 0;
}