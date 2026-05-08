#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    double b = static_cast<double>(10000 * w) / (h * h);
    cout << static_cast<int>(b) << "\n";
    if (b >= 25) {cout << "Obesity";}
    return 0;
}