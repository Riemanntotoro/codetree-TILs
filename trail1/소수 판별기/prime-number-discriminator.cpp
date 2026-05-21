#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool flag = true;
    for (int i=2; i<N; i++) {
        if(N % i == 0) {
            flag = false;
            break;
        }
    }
    char res = flag==true ? 'P' : 'C';
    cout << res << endl;
    return 0;
}