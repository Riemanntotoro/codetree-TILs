#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int k=0; k<2; k++) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}