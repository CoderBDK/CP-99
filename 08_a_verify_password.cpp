#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<pair<char,int>> nv;
        vector<pair<char,int>> cv;
        int charPosStart = -1;
        
        for(int i = 0; i < n; i++) {
            char c;
            cin>>c;
            if(isdigit(c)) {
                nv.push_back(make_pair(c,i));
            }
            if(islower(c)) {
                cv.push_back(make_pair(c,i));
            }
        }
        
        vector<pair<char,int>> nvs = nv;
        sort(nvs.begin(), nvs.end());
        vector<pair<char,int>> cvs = cv;
        sort(cvs.begin(), cvs.end());
        
        if((nv == nvs && cv.empty()) || (cv == cvs && nv.empty())) {
            cout << "YES" << endl;
        } else if(!nv.empty() && !cv.empty() && nv[0].second > cv[0].second) {
            cout << "NO" << endl;
        }
        else if((nv == nvs) && (cv==cvs)) {
            cout <<"YES"<<endl;
        } else {
            cout << "NO" << endl;
        }
       
    }
    return 0;
}
