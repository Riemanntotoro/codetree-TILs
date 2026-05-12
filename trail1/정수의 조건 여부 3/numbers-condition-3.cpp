#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string res = a % 13 == 0 || a % 19 == 0 ? "True" : "False";
    cout << res << " ";
    return 0;
}