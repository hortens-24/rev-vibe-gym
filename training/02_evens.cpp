#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {};

    for (int i = 1; i < 21; ++i) {
        if (i % 2 == 0) vec.push_back(i);
    }
    cout << "[";
    for (int i = 0; i < 10; ++i) {
        cout << vec[i];
        if (vec[i] != 20) cout << ", ";
    }
    cout << "]";

    return 0;
}