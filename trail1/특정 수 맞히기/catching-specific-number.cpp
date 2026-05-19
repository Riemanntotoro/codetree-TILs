#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;
        if (N < 25) {cout << "Higher" << "\n";}
        else if (N > 25) {cout << "Lower" << "\n";}
        else {
            cout <<"Good" << "\n";
            break;
        }
    }
    return 0;
}