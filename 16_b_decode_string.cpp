#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s,r;
        
        cin>>n>>s;
       
        for(int i = n - 1; i >= 0; i--) {
            if(s[i]=='0') {
                string d;
                d.push_back(s[i-1]);
                d.push_back(s[i-2]);
               reverse(d.begin(), d.end());
               char v = 'a' + stoi(d) - 1;
               r.push_back(v);
               i-=2;
            }else {
                string d;
                d.push_back(s[i]);
               char v = 'a' + stoi(d) - 1;
               r.push_back(v);
            }
        }
        reverse(r.begin(), r.end());
        cout <<r<<endl;
    }
    return 0;
}
