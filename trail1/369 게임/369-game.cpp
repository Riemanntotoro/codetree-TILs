#include <iostream>
using namespace std;

int game(int i){
    int a = i / 100;
    i = i % 100;

    int b = i / 10;
    int c = i % 10;

    if (b == 3 or c == 3 or b == 6 or c == 6 or b == 9 or c == 9 or i % 3 == 0) {return 0;}        
    else {return i;}
}

int main() {
    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {cout << game(i) << " ";}
    return 0;
}