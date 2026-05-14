#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> arr = {A, B, C};
    sort(arr.begin(), arr.end());
    cout << arr[1] << " ";
    return 0;
}