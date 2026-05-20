#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool flag = false;
    for(int i=A; i<=B; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            flag = true;
            break;
        }
    }
    int val = flag==true ? 1 : 0;
    cout << val << endl;
    return 0;
}