#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int fv = arr[0];
        int idx = 0;

        if(arr[1] != fv) {
            if(fv == arr[2]) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        }
        else {
            for (int i = 0; i < n; ++i) {
                if(arr[i] != fv) {
                    idx = i + 1;
                    break;
                }
            }

            cout << idx << endl;
        }

    }
    return 0;
}
