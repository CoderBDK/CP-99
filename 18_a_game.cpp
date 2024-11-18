#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < v.size(); i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    if(n % 2 == 0) {
        cout << v[n/2 - 1] << endl;
    } else {
        cout << v[n/2] << endl;
    }
    
    return 0;
}
