#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string val = a==100 ? "pass" : "failure";
    cout << val << "\n";
    return 0;
}