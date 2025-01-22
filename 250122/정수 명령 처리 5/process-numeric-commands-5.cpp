#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> arr;
    
    while (N--) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int x;
            cin >> x;
            arr.push_back(x);
        } 
        else if (command == "pop_back") {
            arr.pop_back();
        } 
        else if (command == "size") {
            cout << arr.size() << "\n";
        } 
        else if (command == "get") {
            int k;
            cin >> k;
            cout << arr[k - 1] << "\n";
        }
    }
    
    return 0;
}
