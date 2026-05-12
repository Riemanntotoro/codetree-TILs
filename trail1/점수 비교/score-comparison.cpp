#include <iostream>
using namespace std;

int main() {
    int AM, AE, BM, BE;
    cin >> AM >> AE >> BM >> BE;
    int val = (AM > BM) && (AE > BE) ? 1 : 0;
    cout << val << " ";
    return 0;
}