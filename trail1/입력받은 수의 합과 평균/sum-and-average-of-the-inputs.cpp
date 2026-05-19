#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ssum = 0;
    for (int i=0; i<N; i++){
        int a;
        cin >> a;
        ssum += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << ssum << " " << (double)ssum / N << " ";
    return 0;
}