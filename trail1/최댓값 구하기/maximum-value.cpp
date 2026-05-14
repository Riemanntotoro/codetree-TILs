#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr = {a, b, c};
    sort(arr.begin(), arr.end());
    cout << arr[2] << endl;
    return 0;
}