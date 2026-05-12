#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string res = (N%2==1 && N%3==0) || (N%2==0 && N%5==0) ? "true" : "false";
    cout << res << " ";
    return 0;
}