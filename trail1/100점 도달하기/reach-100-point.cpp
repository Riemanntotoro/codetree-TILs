#include <iostream>
using namespace std;
char check(int i) {
    if (i >= 90) {return 'A';}
    else if (i >= 80) {return 'B';}
    else if (i >= 70) {return 'C';}
    else if (i >= 60) {return 'D';}
    else {return 'F';}
}

int main() {
    int N;
    cin >> N;
    for (int i=N; i<=100; i++) {
        cout << check(i) << " ";
    }
    return 0;
}