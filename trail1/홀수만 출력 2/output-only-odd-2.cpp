#include <iostream>
using namespace std;

int main() {
    int B, A;
    cin >> B >> A;
    for(int i=B; i>=A; i-=2) {
        cout << i << " ";
    }
    return 0;
}