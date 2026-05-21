#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    for (int i=0; i<5; i++) {
        int N;
        cin >> N;
        if (N % 3 != 0) flag = false;
    }
    int res = flag==true ? 1 : 0;
    cout << res << endl;
    return 0;
}