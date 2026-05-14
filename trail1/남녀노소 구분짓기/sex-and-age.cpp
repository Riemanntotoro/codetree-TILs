#include <iostream>
using namespace std;

int main() {
    int S, Y;
    cin >> S >> Y;
    if (S==0 && Y>= 19) {cout << "MAN" << "\n";}
    else if (S==1 && Y>= 19) {cout << "WOMAN" << "\n";}
    else if (S==1 && Y < 19) {cout << "GIRL" << "\n";}
    else {cout << "BOY" << "\n";}
    return 0;
}