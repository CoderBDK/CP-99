#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n>>s;

        set<char> problems;
        vector<int> spent(26,0);

        for(char c: s) {
            int index = c - 'A';
            spent[index]++;
            if (spent[index] >= (index + 1) && problems.find(c) == problems.end()) {
                problems.insert(c);
            }
        }
        cout << problems.size() << endl;

    }
    return 0;
}
