#include <iostream>
using namespace std;
void swap(int &x, int &y) {
    int temp = y;
    y = x;
    x = temp;
}

int main() {
    int A, B;
    cin >> A >> B;
    int ssum = 0;
    if (A > B) {swap(A, B);}
    for (int i=A; i<=B; i++) {
        if (i % 5 == 0) {ssum += i;}
    }
    cout << ssum << endl;
    return 0;
}