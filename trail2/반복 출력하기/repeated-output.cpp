#include <iostream>
using namespace std;
void PrintNLines(int N) {
    cout << "12345^&*()_" << "\n";
}
int main() {
    int N;
    cin >> N;
    for (int j=0; j<N; j++) {
        PrintNLines(N);
    }
    return 0;
}