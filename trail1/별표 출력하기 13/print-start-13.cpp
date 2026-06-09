#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=2*N; i++) {
        if (i <= N) {
            if (i % 2 == 1){
                for (int j=0; j<N-i/2; j++) {cout << "*" << " ";}
            }
            else {
                for (int k=0; k<i/2; k++) {cout << "*" << " ";}
            }
        }
        else {
            int l = 2*N - i + 1;
            if (l % 2 == 1){
                for (int j=0; j<N-l/2; j++) {cout << "*" << " ";}
            }
            else {
                for (int k=0; k<l/2; k++) {cout << "*" << " ";}
            }
        }
        cout << "\n";
    }
    return 0;
}