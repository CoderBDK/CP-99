#include <iostream>
#include <cmath>
#include <stdexcept>
#include <cassert>
#include <bitset>

using namespace std;

int main() {
    const int bitCount = 8;
    int n = 1 << bitCount;

    for (int i = 0; i < n; ++i) {
        cout << bitset<bitCount>(i) << endl;
    }

    return 0;
}
