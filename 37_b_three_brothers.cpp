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
    int a,b;
    cin>>a>>b;
    int ma = min(a,b);
    int mb = max(a,b);

    if(ma == 1 && mb == 2) {
        cout << 3 << endl;
    } else if(ma == 2 && mb == 3){
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }

    return 0;
}
