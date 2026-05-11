#include <iostream>
#include <string>
using namespace std;

int main() {
    int A;
    cin >> A;
    string val1 = A%3==0 ? "YES" : "NO";
    string val2 = A%5==0 ? "YES" : "NO";
    cout << val1 << "\n" << val2 << "\n";
    return 0;
}