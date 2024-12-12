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
        unordered_map<int,int> map;

        int n;
        cin>>n;
        for (int i = 0; i < n; ++i) {
            int v;
            cin>>v;
            map[v]++;
        }
        bool ok = false;
        int r;
        for(auto v: map) {
            if(v.second >= 3) {
               r = v.first;
               ok = true;
                break;
            }
        }
        if(ok) cout << r << endl;
        else cout << -1 << endl;
    }
    return 0;
}
