#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;

string find_divisible(string s, int n) {
    for (int i = s.size() - 1; i > 0; --i) {
        char temp = s[i];
        for (int j = 0; j < 10; ++j) {
            s[i] = '0' + j;
            int result = stoi(s) % n;
            if(result == 0 && s[0] != '0') {
                return s;
            }else {
                s[i] = temp;
            }
        }



    }
    return "-1";
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int v;
        cin>>v;
        if(v % 7 == 0) {
            cout << v << endl;
        }else {
            cout << find_divisible(to_string(v), 7) << endl;
        }
    }
    return 0;
}
