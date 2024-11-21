#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        cout << (s[0] + s[1]) - '0' * 2 << endl;
    }
    return 0;
}
