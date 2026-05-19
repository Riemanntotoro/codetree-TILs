#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ssum = 0;
    for (int i=1; i<N; i++) {
        if (N % i == 0) {ssum += i;}
    }
    char val = (ssum == N) ? 'P' : 'N';
    cout << val << " ";
    return 0;
}