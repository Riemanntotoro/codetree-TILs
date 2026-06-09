#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=2*N; i++) {
        if (i <= N) {
            if (i % 2 == 0){
                for (int j=0; j<N-i/2+1; j++) {cout << "*" << " ";}
            }
            else {
                for (int k=0; k<(i+1)/2; k++) {cout << "*" << " ";}
            }
        }
        else {
            int l = 2*N - i + 1;
            if (l % 2 == 0){
                for (int j=0; j<N-l/2+1; j++) {cout << "*" << " ";}
            }
            else {
                for (int k=0; k<(l+1)/2; k++) {cout << "*" << " ";}
            }
        }
        cout << "\n";
    }
    return 0;
}