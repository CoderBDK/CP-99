#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
       int n ;
       unordered_map<int,int> map;
       int score = 0;
       cin>>n;
       int arr[n];

       for(int i = 0; i < n; i++) {
           cin>>arr[i];
           map[arr[i]]++;
       }
       for(auto & m: map) {
           score+= m.second / 2;
       }
        cout << score << endl;
    }
    return 0;
}
