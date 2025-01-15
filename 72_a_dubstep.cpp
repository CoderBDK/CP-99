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

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string s;
    cin >> s;
    string v = "";
    bool end = false;

    for (int i = 0; i < s.size(); ++i) {
        v.push_back(s[i]);
        if (v.size() == 3) {
            if (v == "WUB") {
                if (!end) {
                    v.erase(0, 3);
                    end = true;
                }
            } else {
                end = true;
            }
        }

        if (end && v.size() >= 3) {
            if (v.substr(v.size() - 3, v.size()) == "WUB") {
                v.erase(v.size() - 3, v.size());
                v.push_back(' ');
            }
        }
    }

    cout << v << endl;
    return 0;
}