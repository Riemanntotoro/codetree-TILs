#include <iostream>
using namespace std;
int gcd(int n, int m) {
    if (n > m) {return gcd(n-m, m);}
    else if (n < m) {return gcd(n, m-n);}
    else {return n;} 
}
int main() {
    int N, M;
    cin >> N >> M;
    int val = gcd(N, M);
    cout << N*M / val;
    return 0;
}