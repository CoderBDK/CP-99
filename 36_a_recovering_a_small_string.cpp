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
        int n;
        cin >> n;
        string result = "";
        for (int i = 1; i <= 26; ++i) {
            for (int j = 1; j <= 26; ++j) {
                for (int k = 1; k <= 26; ++k) {
                    if (i + j + k == n) {
                        string current_word = string(1, char(i + 'a' - 1)) +
                                              string(1, char(j + 'a' - 1)) +
                                              string(1, char(k + 'a' - 1));
                        if (result.empty() || current_word < result) {
                            result = current_word;
                        }
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
