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
        sort(arr, arr + n);
        int minValue = arr[0];
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(minValue != arr[i]) {
                count += (arr[i] - minValue);
            }
        }
        cout << count << endl;
    }
    return 0;
}
