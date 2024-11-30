#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int pixel;
    cin>>pixel;

    int r = 1, c = pixel;
    for(int i = 1; i <= sqrt(pixel); i++) {
        if(pixel % i == 0) {
            int a = i;
            int b = pixel / i;
            if( a <= b) {
                if(b - a < c - r) {
                    r = a;
                    c = b;
                }
            }
        }
    }

    cout << r << " "<<c<<endl;

    return 0;
}
