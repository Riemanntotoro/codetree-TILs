#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string val1 = a%2==0 ? "even" : "odd";
    string val2 = b%2==0 ? "even" : "odd";
    cout << val1 << "\n" << val2 << endl;
    return 0;
}