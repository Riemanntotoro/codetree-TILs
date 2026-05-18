#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ssum = 0;
    for (int i=N; i<=100; i++) {ssum += i;}
    cout << ssum << endl;
    return 0;
}