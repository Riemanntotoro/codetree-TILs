#include <iostream>
using namespace std;
void Print5Stars() {
    for (int i=0; i<10; i++) {
        cout << "*";
    }
}
int main() {
    for (int j=0; j<5; j++) {
        Print5Stars();
        cout << "\n";
    }
    return 0;
}