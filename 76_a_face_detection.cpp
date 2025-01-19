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
    int n, m;
    int faceCount = 0;

    cin >> n >> m;

    vector <string> grid(n);

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            set<char> chars;
            chars.insert(grid[i][j]);
            chars.insert(grid[i][j + 1]);
            chars.insert(grid[i + 1][j]);
            chars.insert(grid[i + 1][j + 1]);
            if (chars.size() == 4 &&
                chars.count('f') &&
                chars.count('a') &&
                chars.count('c') &&
                chars.count('e')) {
                ++faceCount;
            }
        }
    }
    cout << faceCount << endl;
    return 0;
}
