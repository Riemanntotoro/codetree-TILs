#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N >= 3000) {cout << "book" << "\n";}
    else if (N >= 1000) {cout << "mask" << "\n";}
    else {cout << "no" << "\n";}
    return 0;
}