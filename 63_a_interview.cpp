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

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    int n;
    cin >> n;
    ll A[n];
    ll B[n];

    for (int i = 0; i < n; ++i) { cin >> A[i]; }
    for (int i = 0; i < n; ++i) { cin >> B[i]; }

    ll rA = 0, rB = 0;

    for (int i = 0; i < n; ++i) {
        rA |=  A[i];
    }
    for (int i = 0; i < n; ++i) {
        rB |= B[i];
    }

    cout << (rA + rB) << endl;
    return 0;
}
