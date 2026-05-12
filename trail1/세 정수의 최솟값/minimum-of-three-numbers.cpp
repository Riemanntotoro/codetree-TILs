#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min_val = a;
    if (b < min_val) {min_val = b;}
    if (c < min_val) {min_val = c;}
    cout << min_val << " ";
    return 0;
}