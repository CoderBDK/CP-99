#include <iostream>
using namespace std;
const string CDF = "codeforces";
int main() {
 
    int t;
    cin>>t;
    while(t--) {
        int differCount = 0;
        string s;
        cin>>s;
        for(int i = 0; i < s.size(); i++) {
            if(CDF[i] != s[i]) {
                differCount++;
            }
        }
        cout << differCount << endl;
    }
    return 0;
}
