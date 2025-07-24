#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i <= 20; ++i) {
        count += i;
    }

    cout << "Total: " << count << endl;
}