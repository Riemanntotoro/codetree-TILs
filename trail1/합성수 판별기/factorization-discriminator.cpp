#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool flag = false;
    for (int i=2; i<N; i++) {
        if (N % i == 0) {flag = true; break;}
    }
    string val = flag==true ? "C" : "N";
    cout << val << endl;
    return 0;
}