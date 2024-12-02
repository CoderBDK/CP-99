#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int t = 0;
    cin>>t;
    while(t--) {
        int x;
        cin>> x;

        int bY = 1;
        int bestValue = 2;

        for( int y = 1; y < x; y++) {
            int cGcd = __gcd(x, y);
            int cBestValue = cGcd + y;
            if(cBestValue > bestValue) {
                bestValue = cBestValue;
                bY = y;
            }
        }

        cout << bY << endl;
    }
    return 0;
}
