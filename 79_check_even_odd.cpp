#include <iostream>
#include <bitset>

using namespace std;

int main() {

    char n = 2; // 0b00000010 => EVEN
    char m = 1; // 0b00000001 => ODD

    // a & 1 = r : if r == 0 => EVEN, else => ODD

    // n & 1 = ?
    //  0b00000010
    //  0b00000001
    // ----------------
    //  0b00000000

    // m & 1 = ?
    //  0b00000001
    //  0b00000001
    // ----------------
    //  0b00000001

    cout << sizeof n << endl;

    if(n & 1) {
        cout << "ODD";
    } else {
        cout << "EVEN";
    }

    cout << endl;

    // Even -> end in 0 (LSB = 0)
    // Odd -> end in 1 (LSB = 1).
    cout << bitset<8>(0b1011111 & 0b00000001);
    return 0;
}
