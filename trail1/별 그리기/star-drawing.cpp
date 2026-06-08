#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=2*N-1; i++) {
        if (i <= N) {
            for (int j=0; j<N-i; j++) {
                cout << " ";
            }
            for (int k=0; k<2*i-1; k++) {
                cout << "*";
            }
        }
        else {
            for (int j=0; j<i-N; j++) {
                cout << " ";
            }
            for (int k=0; k<2*(2*N-i)-1; k++) {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}