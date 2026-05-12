#include <iostream>
#include <string>
using namespace std;

int main() {
    int M;
    cin >> M;
    string res = "Winter";
    if (M >= 3 && M <= 5) {res = "Spring";}
    else if (M >= 6 && M <= 8) {res = "Summer";}
    else if (M >= 9 && M <= 11) {res = "Fall";}
    cout << res << endl;
    return 0;
}