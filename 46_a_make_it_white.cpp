#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>
#include <cmath>

using namespace std;

typedef long long ll;
#define MOD 100

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }

ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        int start = 0;
        int end = 0;
        for(int i = 0; i < n; i++) {
            if(s[i]=='B') {
                start = i;
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(s[i]=='B') {
               end = i;
            }
        }

        cout<<end + 1 - start << endl;
    }
    return 0;
}
