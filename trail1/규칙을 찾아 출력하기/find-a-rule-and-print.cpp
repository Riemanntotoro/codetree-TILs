#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<char>> board(N, vector<char>(N, ' '));
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i==0 || i==N-1 || j==0 || j==N-1) {board[i][j] = '*';}
            else if (i > j) {board[i][j] = '*';}
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