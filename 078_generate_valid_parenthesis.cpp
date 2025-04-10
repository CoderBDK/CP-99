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

#include <iostream>

using namespace std;

pair<int, int> getTwoSum(int sortedArray[], int size, int target) {
    int leftIndex = 0;
    int rightIndex = size - 1;

    while (leftIndex < rightIndex) {
        int firstNumber = sortedArray[leftIndex];
        int secondNumber = sortedArray[rightIndex];
        int sum = firstNumber + secondNumber;

        if (sum > target) {
            rightIndex--;
        } else if (sum < target) {
            leftIndex++;
        } else {
            return make_pair(firstNumber, secondNumber);
        }
        cout << leftIndex << " ," << rightIndex << endl;
    }
    return make_pair(0, 0);
}

void generateParen(int n, string &s, int open, int close, vector<string> &result) {
    if (open == n && close == n) {
        result.push_back(s);
        return;
    }


    if (open < n) {
        s.push_back('(');
        generateParen(n, s, open + 1, close, result);
        s.pop_back();
    }
    if (close < open) {
        s.push_back(')');
        generateParen(n, s, open, close + 1, result);
        s.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    string current;
    generateParen(n, current, 0, 0, result);
    return result;
}


int main() {
    int n;
    cin>>n;

    vector<string> combinations = generateParenthesis(n);
    for (const auto& str : combinations) {
        cout << str<<" ";
    }
    return 0;
}
