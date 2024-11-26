#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    int lastDigit = n % 10;
    if (lastDigit == 0) {
        cout << n << endl;
    } else {
        int v = (n / 10) * 10;
        if (lastDigit >= 5) {
            v += 10;
        }
        cout << v << endl;
    }
    return 0;
}
