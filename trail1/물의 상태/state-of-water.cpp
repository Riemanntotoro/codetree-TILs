#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {cout << "ice" << "\n";}
    else if (n >= 100) {cout << "vapor" << "\n";}
    else {cout << "water" << "\n";}    
    return 0;
}