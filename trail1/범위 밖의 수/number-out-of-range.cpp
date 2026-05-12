#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string res = a < 10 or a > 20 ? "yes" : "no";
    cout << res << " ";
    return 0;
}