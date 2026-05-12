#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    for (int i=0; i<3; i++) {
        int N;
        cin >> N;
        arr.push_back(N);
    }
    int val = arr[0];
    for (int i : arr) {
        if (i < val) {val = i;}
    }
    int res1 = val==arr[0] ? 1 : 0;
    int res2 = arr[0]==arr[1] && arr[1]==arr[2] ? 1 : 0;
    cout << res1 << " " << res2 << " ";
    return 0;
}