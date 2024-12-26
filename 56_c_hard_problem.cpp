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
    cin>>t;
    while (t--) {
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll total = 0;
        ll remaining = 0;
        // for a
        if(a >= m) {
            total += m;
        } else if(a < m) {
            remaining += m - a;
            total += a;
        }
        // for b
        if(b >= m) {
            total += m;
        } else if(b < m) {
            remaining += m - b;
            total+=b;
        }
        // for c
        if(c >= remaining) {
            total += remaining;
        }else if(c < remaining) {
            total+= c;
        }
        cout << total << endl;
    }
    return 0;
}
