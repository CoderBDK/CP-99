#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;


int main() {
    string s,t;
    cin>>s>>t;
    reverse(t.begin(), t.end());
    cout <<((s==t)?"YES":"NO")<<endl;
    return 0;
}
