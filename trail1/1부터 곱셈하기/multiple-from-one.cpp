#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int prod = 1;
    int mark = 0;
    for (int i=1; i<=10; i++) {
        prod *= i;
        if (prod >= N) {
            mark = i;
            break;
        }
    }
    cout << mark << " ";
    return 0;
}