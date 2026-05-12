#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string val = (a >= 10 && a <= 20) ? "yes" : "no";
    cout << val << " ";
    return 0;
}