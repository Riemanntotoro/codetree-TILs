#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> board(N, vector<int>(N, 0));
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            board[i][j] = 11 + 2*i + 2*j;
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}