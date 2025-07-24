#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> evens;

    for (int i = 2; i <= 20; i+=2) {
        evens.push_back(i);
    }
    cout << "[";
    for (int i = 0; i < evens.size(); ++i) {
        cout << evens[i];
        if (evens[i] != 20) cout << ", ";
    }
    cout << "]";

    return 0;
}