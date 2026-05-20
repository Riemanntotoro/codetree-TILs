#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = true;
    for (int i=a; i<=b; i++) {
        if (i % c == 0) {flag = false; break;}
    }
    string val = flag==true ? "YES" : "NO";
    cout << val << endl;
    return 0;
}