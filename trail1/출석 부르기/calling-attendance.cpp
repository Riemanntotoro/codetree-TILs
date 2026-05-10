#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr = {"John", "Tom", "Paul"};
    int N;
    cin >> N;
    if (N<=3){
        cout << arr[N-1] << endl;
    }
    else {cout << "Vacancy" << endl;}
    return 0;
}