#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            int val = (N*i + j + 1) % 9==0 ? 9 : (N*i + j + 1) % 9;
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}