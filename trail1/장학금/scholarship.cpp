#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int score;
    if (A >= 90) {
        if (B >= 95) {score = 100000;}
        else if (B >= 90) {score = 50000;}
        else {score = 0;}
    }
    else {score = 0;}
    cout << score << endl;
    return 0;
}