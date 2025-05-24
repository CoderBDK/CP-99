#include <iostream>

using namespace std;

int binaryToDecimal(int binaryNumber) {
    int result = 0;
    int power_of_two = 1;

    while (binaryNumber > 0) {
        int bit = binaryNumber % 10;
        result += bit * power_of_two;
        power_of_two *= 2;
        binaryNumber /= 10;
    }
    return result;
}


int main() {
    int binaryNumber = 1011;
    int decimalNumber = binaryToDecimal(binaryNumber);

    cout << decimalNumber << endl;

    return 0;
}
