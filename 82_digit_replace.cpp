#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int replaceDigit = 9;

    if (n == 0) {
        cout << ">>:" << 0 << endl;
        cout << "<<:" << replaceDigit << endl;
        return 0;
    }

    bool isNegative = n < 0;
    int absN = abs(n);
    int result = 0, place = 1;

    cout << ">>:" << n << endl;

    while (absN > 0) {
        int digit = absN % 10;
        if (digit == 0) digit = replaceDigit;

        result += digit * place;
        // cout << result << endl;

        absN /= 10;
        place *= 10;
    }

    if (isNegative) result *= -1;

    cout << "<<:" << result << endl;

    return 0;
}
