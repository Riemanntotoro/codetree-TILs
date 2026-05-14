#include <iostream>
#include <string>
using namespace std;

int main() {
    int Y;
    cin >> Y;
    string res = (Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0 ? "true" : "false";
    cout << res << " ";    
    return 0;
}