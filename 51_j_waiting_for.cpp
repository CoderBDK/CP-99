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
    int n;
    cin>>n;
    vector<pair<char,int>> events;
    int people = 0;

    while (n--) {
        char c;
        int v;
        cin>>c>>v;
        events.push_back(make_pair(c, v));
    }
    for(auto v: events) {
        if(v.first == 'P') {
            people+= v.second;
        }else {
            if(v.second > people) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            people = max(0, people - v.second);
        }
    }
    return 0;
}
