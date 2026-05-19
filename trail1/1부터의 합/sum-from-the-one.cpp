#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ssum = 0, mark = 0;
    for (int i=1; i<=100; i++) {
        ssum += i;
        if (ssum >= N) {
            mark = i;
            break;
        }
    }
    cout << mark << " ";
    return 0;
}