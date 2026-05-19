#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0, i = 1;
    while(N > 1) {
        N /= i;
        cnt++;
        i++;
    }
    cout << cnt << endl;
    return 0;
}