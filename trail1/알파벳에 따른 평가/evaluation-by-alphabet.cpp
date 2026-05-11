#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, string> arr = {{"S","Superior"}, {"A","Excellent"}, {"B","Good"}, {"C","Usually"}, {"D","Effort"}};
    string A;
    cin >> A;
    auto it = arr.find(A);
    if (it != arr.end()) {cout << it->second << endl;}
    else {cout << "Failure" << endl;}
    return 0;
}