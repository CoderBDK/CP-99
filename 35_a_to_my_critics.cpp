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
  cin>>t;
    while (t--) {
        int a[3];
        for(int i = 0; i < 3; i++) {
            cin>>a[i];
        }
        sort(a, a + 3);
        if(a[2] + a[1] >= 10) {
            cout << "YES"<<endl;;
        }else {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}