#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int size = 2*N+1;
    vector<vector<char>> board(size, vector<char>(size, '*'));
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            if (i % 2 == 1 && j % 2 == 1) {board[i][j] = ' ';} 
        }
    }

    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            {cout << board[i][j] << " ";} 
        }
        cout << "\n";
    }
    return 0;
}